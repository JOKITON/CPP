/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:38:23 by jokin             #+#    #+#             */
/*   Updated: 2023/09/20 13:11:58 by jaizpuru         ###   ########.fr       */
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

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
	switch (checkStr(level)) {
		case 0:
			this->debug();
			break ;
		case 1:
			this->info();
			break ;
		case 2:
			this->warning();
			break ;
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return;
}


void	HarlLife(void) {
	std::string	input;
	Harl		Harl;
	while (1) {
		Harl.complain("DEBUG");
		usleep(1500000);
		Harl.complain("INFO");
		usleep(1500000);
		Harl.complain("WARNING");
		usleep(1500000);
		Harl.complain("ERROR");
		usleep(1500000);
		std::cout << "\n\t----------------------------\n";
	}
}
