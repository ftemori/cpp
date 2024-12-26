#include "phoneBook.h"

void	numSecret(PhoneBook &book, int i);
int	ft_isAlpha(string &str);

std::string	formatString(const std::string &str, size_t size)
{
	if (str.length() > size)
		return (str.substr(0, size - 1) + ".");
	return (str);
}

int	isDigit(string str)
{
	int	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

void	yellowColor(string str)
{
	std::cout << "\033[1;" << 33 << "m";
	cout << str;
	cout << "\033[0m";
}

void	redColor(string str)
{
	std::cout << "\033[1;" << 31 << "m";
	cout << str;
	cout << "\033[0m";
}

void	greenColor(string str)
{
	std::cout << "\033[1;" << 32 << "m";
	cout << str;
	cout << "\033[0m";
}

void	trimString(string &str)
{
	int	end = str.length() - 1;
	int	start = 0;
	while (start <= end && isspace(str[start]))
		start++;
	str.erase(0, start);
	end = str.length() - 1;
	while (end >= 0 && isspace(str[end]))
		end--;
	str.erase(end + 1);
}

void	addToPhoneBook(PhoneBook &book, int i)
{
	string	first, last, nick;
	cout << endl;
	greenColor("Please enter your first name");
	redColor("*");
	greenColor(": ");
	while (true)	//loop runs util correct input has been received
	{
		cin.clear();
		if (!getline(cin, first))
			exit(0);
		trimString(first);	// deleting trailing and leading spaces
		if (first.empty())
			redColor("first name is required!\n");
		else if (first.length() > 25)
			redColor("Your name must not contain more than 25 characters!\n");
		else if (isDigit(first) != 0) // not digits allowed in name
			redColor("Your name can not contain any numbers!\n");
		else
			break ;
		greenColor("try again please: ");
	}
	greenColor("Please enter your last name");
	redColor("*");
	greenColor(": ");
	while (true)
	{
		cin.clear();
		if (!getline(cin, last))
			exit(0);
		trimString(last);
		if (last.empty())
			redColor("last name is required!\n");
		else if (last.length() > 25)
			redColor("Your last name must not contain more than 25 characters!\n");
		else if (isDigit(last) != 0)
			redColor("Your last name can not contain any numbers!\n");
		else
			break ;
		greenColor("try again please: ");
	}
	greenColor("Please enter your nickname");
	yellowColor("(optional): ");
	cin.clear();
	if (!getline(cin, nick))
			exit(0);
	if (nick.empty())
		nick = "";
	else
		trimString(nick);
	book.setNames(first, last, nick, i);
	numSecret(book, i);
}

void	numSecret(PhoneBook &book, int i)
{
	string	num, secret;
	greenColor("please enter your phone number");
	redColor("*");
	greenColor(": ");
	while (true)
	{
		cin.clear();
		if (!getline(cin, num))
			exit(0);
		trimString(num);
		if (num.empty())
			redColor("A phone number is required!\n");
		else if (ft_isAlpha(num) == 1)	// no alphabetical characters are allowed
			redColor("Your phone number may only contain digits!\n");
		else if (num.length() > 13)
			redColor("Your phone number may only contain less than 14 digits!\n");
		else
			break ;
		greenColor("Please try again: ");
	}
	greenColor("Please enter your darkest secret");
	redColor("*");
	greenColor(": ");
	while (true)
	{
		cin.clear();
		if(!getline(cin, secret))
			exit(0);
		if (secret.empty())
			redColor("A secret is required!\n");
		else
			break ;
		greenColor("Please try again: ");
	}
	book.setPhoneSecret(num, secret, i);
	cout << endl;
}

int	indexcalc(int i)
{
	int	res = i;
	while (res >= 8)
		res = i - 8;
	return (res);
}

int	main(void)
{
	int	i = 0, index;
	string	command;
	PhoneBook book;

	cout << endl;
	greenColor("Welcome to your phonebook!\nYou can add ");	// text printed in different colors
	redColor("(ADD)");
	greenColor(" or search ");
	redColor("(SEARCH)");
	greenColor(" for contacts or use ");
	redColor("(EXIT)");
	greenColor(" if you wish to exit the phonebook.\n");
	while (true)
	{
		greenColor("Enter a command: ");
		if (!getline(cin, command))	// if statement checks if the EOF is reached in case of (ctrl + D)
			break ;
		trimString(command);
		if (command == "ADD" || command == "add")
		{
			index = indexcalc(i);	// I have two indexes. one for saving and another for displaying the contacts
			addToPhoneBook(book, index);
			index++;
			i++;
		}
		else if (command == "SEARCH" || command == "search")
		{
			if (i == 0)
				redColor("No contacts to show.\n");
			else
				book.displayContacts(i);
		}
		else if (command == "EXIT" || command == "exit")
			exit(0);
		else
			redColor("Valid commands: ADD, SEARCH or EXIT!");
		cin.clear();
	}
	return (0);
}
