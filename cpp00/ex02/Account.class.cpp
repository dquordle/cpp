#include "Account.class.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

Account::Account() {}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";amount:" << this->_amount
		<< ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:" << this->_amount
		<< ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

int Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" <<
		Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount;
	this->_nbDeposits += 1;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalNbDeposits += 1;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:" << this->_amount
		<< ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << _amount <<";nb_withdrawals:"
			<< _nbWithdrawals << std::endl;
		Account::_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
	}
	return true;
}

int	Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits << ";withdrawals:" <<
			  this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);
	std::cout << '[' << (now->tm_year + 1900);
	if (now->tm_mon < 9)
		std::cout << '0';
	std::cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << '0';
	std::cout <<  now->tm_mday << '_';
	if (now->tm_hour < 10)
		std::cout << '0';
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << '0';
	std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << '0';
	std::cout << now->tm_sec << ']';
}