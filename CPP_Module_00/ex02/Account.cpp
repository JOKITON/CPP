/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:09:32 by jokin             #+#    #+#             */
/*   Updated: 2023/06/29 14:09:36 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*void	Account::_displayTimestamp() {
	time_t	sec;
	tm*	local;

	sec = time(NULL);
	local = localtime(&sec);
	std::ostringstream oss;
	//oss << '[' << std::put_time(local, "%Y%m%d_%H%M%S") << ']';
	strftime(local, sizeof(local), "%Y%m%d_%H%M%S", localtime(sec));
    std::cout << oss.str();
}*/

void Account::_displayTimestamp() {
        time_t now = time(0);
        char local[80];
        strftime(local, sizeof(local), "%Y%m%d_%H%M%S", localtime(&now));

        std::ostringstream oss;
        oss << '[' << local << ']';
        std::cout << oss.str() << std::endl;
    }

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

Account::Account(int initial_deposit) {
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	Account::_displayTimestamp(); 
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;

}

int	Account::checkAmount(void) const {
	return _amount;
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	/*std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;*/
}

void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits++;
	_totalAmount += deposit;
}



bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";wtihdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return (FALSE); }
	else if (withdrawal <= this->_amount)
		std::cout << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	return (TRUE);
}




