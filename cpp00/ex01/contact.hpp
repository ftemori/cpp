#ifndef CONTACT_HPP
#define CONTACT_HPP


class Contact
{
	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNum;
	std::string	_darkestSecret;

	public:
	void	setName(std::string firstNameInput);
	void	setLastName(std::string lastNameInput);
	void	setNickName(std::string nickNameInput);
	void	setPhone(std::string phone);
	void	setDarkestSecret(std::string secret);
	void	searchPreview(int i);
	void	getContact(void);
};

#endif