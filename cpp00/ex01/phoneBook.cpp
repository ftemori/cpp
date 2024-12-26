#include "phoneBook.h"
void	greenColor(string str);
void	redColor(string str);

int	ft_isAlpha(string &str){
	int	i = 0;
	while (str[i]) {
		if (str[i] < 48 || str[i] > 57)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(string &str) {
	int	num;

	std::istringstream iss(str);
	if (iss >> num)
		return (num);
	return (-1);
}

void	separator(int x) {
	int	i = 0;
	while (i < x) {
		std::cout << "=";
		i++;
	}
	std::cout << std::endl;
}

void	PhoneBook::displayContacts(int i) {
	string	index;
	int	num;
	int	k = 0;

	if (i > 8)
		i = 8;
	separator(42);
	while (k < i) {
		_contacts[k].searchPreview(k);
		k++;
	}

	std::cout << std::endl;
	separator(42);
	std::cout << std::endl;
	greenColor("Select your desired contact by it's index: ");

	while (true) {
		cin.clear();
		if (!std::getline(cin, index))
			exit(0);
		trimString(index);
		if (!ft_isAlpha(index) || !index.empty()) {
			num = ft_atoi(index);
			if (num < 0 || num >= i)
				redColor("Please select a valid index: ");
			else {
				std::cout << std::endl;
				_contacts[num].getContact();
				break ;
			}
		}
	}
	std::cout << std::endl;
}

void	PhoneBook::setPhoneSecret(std::string phone, std::string secret, int i) {
	_contacts[i].setPhone(phone);
	_contacts[i].setDarkestSecret(secret);
}

void	PhoneBook::setNames(std::string &FName, std::string &LName, std::string &NName, int i) {
	_contacts[i].setName(FName);
	_contacts[i].setLastName(LName);
	_contacts[i].setNickName(NName);
}