#include "Harl.hpp"

void	redColor(std::string str);
void	greenColor(std::string str);

void	Harl::_debug(void)
{
	greenColor("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
burger. I really do!");
}

void	Harl::_info(void)
{
	greenColor("I cannot believe adding extra bacon costs more money. You didn’t \
put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}

void	Harl::_warning(void)
{
	greenColor("I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month.");
}

void	Harl::_error(void)
{
	greenColor("This is unacceptable! I want to speak to the manager now.");
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*HarlFunc)(void);
	HarlFunc	funcs[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	std::cout << " ";
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			{
				return ;
			}
		}
	}
	redColor("Unknown level ");
	redColor(level);
	return ;
}