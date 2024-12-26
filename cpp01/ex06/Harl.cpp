#include "Harl.hpp"

void	greenColor(std::string str);
void	yellowColor(std::string str);

void	Harl::_debug(void)
{
	greenColor(" I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
burger.\n I really do!");
}

void	Harl::_info(void)
{
	greenColor(" I cannot believe adding extra bacon costs more money.\n You didn’t \
put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}

void	Harl::_warning(void)
{
	greenColor(" I think I deserve to have some extra bacon for free.\n I’ve been coming for \
years whereas you started working here since last month.");
}

void	Harl::_error(void)
{
	greenColor(" This is unacceptable!\n I want to speak to the manager now.");
}

void	Harl::filter(std::string &level)
{
	typedef void(Harl::*Funcs_t)(void);
	Funcs_t coments[] = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			yellowColor("[ ");
			yellowColor(levels[i]);
			yellowColor(" ]\n");
			(this->*coments[i])();
			std::cout << std::endl << std::endl;
			break ;
		}
		else if (i == sizeof(levels) / sizeof(levels[0]) - 1)
		{
			yellowColor("[ Probably complaining about insignificant problems ]\n");
			return ;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (level != levels[i])
		{
			yellowColor("[ ");
			yellowColor(levels[i]);
			yellowColor(" ]\n");
			(this->*coments[i])();
			std::cout << std::endl << std::endl;
		}
	}
}