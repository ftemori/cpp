#include "./headers/BitcoinExchange.hpp"

bool	isDate(const std::string &date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	return true;
}

bool	isValidDate(const std::string &date)
{
	int	year, month, day;
	char	sep1, sep2;
	std::istringstream	ss(date);
	ss >> year >> sep1 >> month >> sep2 >> day;
	if (ss.fail() || sep1 != '-' || sep2 != '-')
		return false;

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	if (month == 2) {
		bool isLeaYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if (day > 29 || (day == 29 && !isLeaYear))
			return false;
	}
	return true;
}

void	BitcoinExchange::processInput(const std::string &inputFile)
{
	std::ifstream	file(inputFile.c_str());
	if (!file.is_open()) {
		std::cerr << RED<< "Error: could not open file!" << RESET << std::endl;
		return ;
	}

	std::string	line;
	while (std::getline(file, line))
	{
		size_t	delimiter = line.find('|');
		if (delimiter == std::string::npos) {
			std::cerr << RED<< "Error: bad input => " << line << RESET << std::endl;
			continue ;
		}

		std::string	date = line.substr(0, delimiter - 1);
		std::string	valueStr = line.substr(delimiter + 2);

		if (!isDate(date))
			continue ;

		if (!isValidDate(date)) {
			std::cerr << RED << "Error: bad input => " << date << std::endl;
			continue ;
		}

		float	value = atof(valueStr.c_str());
		if (value > 1000) {
			std::cerr << RED<< "Error: too large a number." << RESET << std::endl;
			continue ;
		}
		else if (value < 0) {
			std::cerr << RED<< "Error: not a positive number." << RESET << std::endl;
			continue ;
		}

		std::map<std::string, float>::iterator	it = _prices.lower_bound(date);
		if (it == _prices.end() || it->first != date) {
			if (it == _prices.begin()) {
				std::cerr << RED<< "Error: no valid date found for " << date << RESET << std::endl;
				continue ;
			}
			--it;
		}
		std::cout << BLUE << date << " => " << value << " = " << std::fixed << std::setprecision(2) << value * it->second << RESET << std::endl;
	}
}

void	BitcoinExchange::loadDatabase(const std::string &database)
{
	std::ifstream	file(database.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open the database file!");
	std::string	line;
	while (std::getline(file, line))
	{
		std::string	date;
		float	price;
		size_t	delimiter = line.find(',');
		if (delimiter == std::string::npos)
			continue ;
		date = line.substr(0, delimiter);
		price = atof(line.substr(delimiter + 1). c_str());
		_prices[date] = price;
	}
}

BitcoinExchange::BitcoinExchange(const std::string &database) { loadDatabase(database); }
