#include <iostream>
#include <fstream>
#include <string>

void	yellowColor(std::string str) {
	std::cout << "\033[1;" << 33 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	redColor(std::string str) {
	std::cout << "\033[1;" << 31 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	greenColor(std::string str) {
	std::cout << "\033[1;" << 32 << "m";
	std::cout << str;
	std::cout << "\033[0m";
}

void	transferContent(std::ifstream &oFile, std::ofstream &nFile, const std::string &s1, const std::string &s2)
{
	size_t	found, pos = 0;
	std::string	line, result;
	while (true)
	{
		oFile >> line;
		if (line.empty())
			break ;
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			result += line.substr(pos, found - pos);
			result += s2;
			pos += found + s2.length();
		}
		result += line.substr(pos);
		nFile << result << "\n";
		result.clear();
		line.clear();
	}
	return ;
}

int	main(int ac, char *av[])
{
	if (ac != 4) {
		redColor ("Wrong number of arguments!\n");
		return (0);
	}
	if (std::string(av[2]).empty() || std::string(av[3]).empty()) {
		redColor ("No valid strings detected!\n");
		return (0);
	}
	std::ifstream	oFile(av[1]);
	if (!oFile.is_open()) {
		std::cout << "Failed to open the file!\n";
		return (0);
	}
	std::string	newFileName = std::string(av[1]) + ".replace";
	std::ofstream	substituteFile(newFileName.c_str());
	substituteFile.is_open();

	transferContent(oFile, substituteFile, std::string(av[2]), std::string(av[3]));
	substituteFile.close();
	oFile.close();
}