/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:38:23 by jokin             #+#    #+#             */
/*   Updated: 2023/10/11 17:31:15 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "[Harl] has been constructed!" << std::endl;
	return ;
}

Harl::~Harl( void ) {
	std::cout << "[Harl] has been destroyed!" << std::endl;
	return ;
}

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

int	Harl::checkStr(std::string arg) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (arg == levels[i])
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level) {
	switch (checkStr(level)) { // cmp string to get the number
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 1:
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			this->warning();
			this->error();
			break ;
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return;
}
