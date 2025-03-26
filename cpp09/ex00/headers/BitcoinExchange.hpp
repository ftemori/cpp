#ifndef	BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <stdexcept>
#include "Colors.hpp"

class	BitcoinExchange
{
	private:
		std::map<std::string, float>	_prices;
	
	public:
		BitcoinExchange(const std::string &database);
		void	loadDatabase(const std::string &database);
		void	processInput(const std::string &InputFile);
};

#endif