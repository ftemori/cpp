#include <iomanip>
#include <iostream>
#include "contact.hpp"

std::string	formatString(const std::string &str, size_t size);
void	separator(int x);

void	Contact::setName(std::string firstNameInput)
{
	_firstName = firstNameInput;
}

void	Contact::setLastName(std::string lastNameInput)
{
	_lastName = lastNameInput;
}

void	Contact::setNickName(std::string nickNameInput)
{
	_nickName = nickNameInput;
}

void	Contact::setPhone(std::string phone)
{
	_phoneNum = phone;
}

void	Contact::setDarkestSecret(std::string secret)
{
	_darkestSecret = secret;
}

void	Contact::searchPreview(int i)
{
	size_t	space = 10;

	std::cout << i << "   " << std::setw(10) << formatString(_firstName, space) << "|" \
	<< std::setw(space) << formatString(_lastName, space) << "|" \
	<< std::setw(space) << formatString(_nickName, space) << "|" << std::endl;
}

void	Contact::getContact(void)
{
	std::cout << " " << _firstName << std::endl;
	std::cout << " "  << _lastName << std::endl;
	if (!_nickName.empty())
		std::cout << " "  << _nickName << std::endl;
	std::cout << " "  << _phoneNum << std::endl;
	std::cout << " "  << _darkestSecret << std::endl;
	separator(_darkestSecret.length() + 10);
}
