#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	private:
	Contact _contacts[8];
 
	public:
	void	setNames(std::string &FName, std::string &LName, std::string &NName, int i);
	void	setPhoneSecret(std::string phone, std::string secret, int i);
	void	displayContacts(int i);
};

#endif