/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:16:56 by iportill          #+#    #+#             */
/*   Updated: 2024/03/15 11:15:43 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
	std::cout << "Account constructor create" << std::endl;
}
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount =_totalAmount + initial_deposit;

    _displayTimestamp();
    std::cout << "index:" ;
	std::cout << _accountIndex ;
	std::cout << ";amount:" ;
	std::cout << _amount ;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
    _nbAccounts--;
    _totalAmount = _totalAmount - _amount;
    _displayTimestamp();
    std::cout << "index:" ;
	std::cout << _accountIndex ;
	std::cout << ";amount:" ;
	std::cout << _amount << ";closed" << std::endl;
}
void	Account::_displayTimestamp( void )
{
    time_t now = time(0);
    struct tm* ltm = localtime(&now);
    
    std::cout << "[" << (ltm->tm_year + 1900);
    if (ltm->tm_mon + 1 < 10) std::cout << "0";
    std::cout << (ltm->tm_mon + 1);
    if (ltm->tm_mday < 10) std::cout << "0";
    std::cout << ltm->tm_mday << "_";
    if (ltm->tm_hour < 10) std::cout << "0";
    std::cout << ltm->tm_hour;
    if (ltm->tm_min < 10) std::cout << "0";
    std::cout << ltm->tm_min;
    if (ltm->tm_sec < 10) std::cout << "0";
    std::cout << ltm->tm_sec << "] ";
}
int Account::getNbAccounts()
{
	return(_nbAccounts);
}
int Account::getTotalAmount()
{
	return(_totalAmount);
}
int Account::getNbDeposits()
{
	return(_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}
void Account::displayAccountsInfos()
{
    //[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
    //[2024315_111226] accounts:8;total:12442;withdrawals:6
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << getNbAccounts();
	std::cout << ";total:";
  	std::cout << getTotalAmount();
	std::cout << ";deposits:";
	std::cout << getNbDeposits();
	std::cout << ";withdrawals:";
	std::cout << getNbWithdrawals() << std::endl;;
}
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
    std::cout << "index:"; 
	std::cout << _accountIndex ;
	std::cout << ";p_amount:";
	std::cout << _amount ;
	std::cout << ";deposit:" << deposit;

    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;

    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" ;
	std::cout << _accountIndex ;
	std::cout << ";p_amount:" ;
	std::cout << _amount ;
	std::cout << ";withdrawal:";

    if (_amount >= withdrawal)
    {
        _amount =_amount - withdrawal;
        _totalAmount =_totalAmount - withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;

        std::cout << withdrawal ;
		std::cout  << ";amount:" ;
		std::cout  << _amount ;
		std::cout << ";nb_withdrawals:" ;
		std::cout << _nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << "refused" << std::endl;
        return false;
    }
}

void	Account::displayStatus( void ) const
{
 _displayTimestamp();
    std::cout << "index:" ;
	std::cout << _accountIndex ;
	std::cout << ";amount:" ;
	std::cout << _amount ;
	std::cout << ";deposits:" ;
	std::cout << _nbDeposits ;
	std::cout << ";withdrawals:" ;
	std::cout << _nbWithdrawals << std::endl;
}

