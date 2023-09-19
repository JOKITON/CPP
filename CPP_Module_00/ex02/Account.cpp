/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:09:32 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 17:03:02 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/**
 * @brief Construct a new Account:: Account object
 * 
 * @param initial_deposit Initial amount of money set to Account object.
 */
Account::Account(int initial_deposit) {
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	_nbAccounts++;
	Account::_displayTimestamp(); 
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

/**
 * Destroy the Account:: Account object
 * 
 */
Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;

}

/**
 * @brief Displays a timestamp using current time in a nice format.
 * 
 */
void Account::_displayTimestamp() {
        time_t now = time(0);
        char local[80];
        strftime(local, sizeof(local), "%Y%m%d_%H%M%S", localtime(&now));

        std::ostringstream oss;
        oss << '[' << local << ']';
		std::cout << oss.str();
    }

/**
 * @brief Returns the number of existent Accounts using a global variable.
 * 
 * @return int 
 */
int	Account::getNbAccounts() {
	return _nbAccounts;
}

int	Account::getTotalAmount() {
	return _totalAmount;
}

int	Account::getNbDeposits() {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

int	Account::checkAmount(void) const {
	return _amount;
}

/**
 * @brief Displays a summary of an individual Account information, including its index, total balance, number of deposits, and number of withdrawals.
 * 
 */
void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

/**
 * @brief Displays a summary of account information, including the number of accounts, total balance (in currency),
 * 	number of deposits, and number of withdrawals.
 */
void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

/**
 * @brief Increases the account balance by the specified 'deposit' amount.
 * 
 * @param deposit The amount of money to be deposited.
 */
void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

/**
 * @brief Attempts to withdraw money from the Account if sufficient funds are available.
 * 
 * @param withdrawal The amount of money to be withdrawn.
 * @return true if the withdrawal was successful.
 * @return false if the withdrawal was refused due to insufficient funds.
 */
bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return (false); }
	else if (withdrawal <= this->_amount)
		std::cout << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	return (true);
}
