#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);
	std::tm	*localTime = std::localtime(&now);

	char	timeStamp[20];
	std::strftime(timeStamp, sizeof(timeStamp), "[%Y%m%d_%H%M%S] ", localTime);
	std::cout << timeStamp;
}

Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
			<< ";p_amount:" << _amount - deposit
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;

		std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount + withdrawal
				<< ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}
