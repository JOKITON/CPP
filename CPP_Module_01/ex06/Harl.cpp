/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:38:23 by jokin             #+#    #+#             */
/*   Updated: 2023/07/07 08:36:33 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	clearTerminal(void) {
	std::cout << "\033[2J\033[1;1H";
	return;
}

void	CoutMenu(void) {
		clearTerminal();
		std::cout << "\tChoose between these four options for Harl : \n\n\t";
	       	std::cout << "1. [DEBUG]\n" << "\t2. [INFO]\n" << "\t3. [WARNING]\n" << "\t4. [ERROR]\n";
		std::cout << "$";
		return; }

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(LogLevel level) {
	if (level == (DEBUG)) {
		this->debug();
		this->info();
		this->warning();
		this->error(); }
	else if (level == (INFO)) {
		this->info();
		this->warning();
		this->error(); }
	else if (level == (WARNING)) {
		this->warning();
		this->error(); }
	else if (level == (ERROR))
		this->error();
	return;
}

