/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:38:23 by jokin             #+#    #+#             */
/*   Updated: 2023/07/06 10:55:42 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*void	clearTerminal(void) {
	std::cout << "\033[2J\033[1;1H";
	return;
}

void	CoutMenu(void) {
		clearTerminal();
		std::cout << "\tChoose between these four options for Harl : \n\n\t";
	       	std::cout << "1. [DEBUG]\n" << "\t2. [INFO]\n" << "\t3. [WARNING]\n" << "\t4. [ERROR]\n";
		std::cout << "$";
		return; }*/

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

void	Harl::complain(std::string level) {
	if (!level.compare("DEBUG"))
		this->debug();
	else if (!level.compare("INFO"))
		this->info();
	else if (!level.compare("WARNING"))
		this->warning();
	else if (!level.compare("ERROR"))
		this->error();
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
	/*CoutMenu();
	while (1) {
		std::cin >> input;
		if (!input.compare("DEBUG") || !input.compare("INFO") || !input.compare("WARNING") || !input.compare("ERROR")) {
			person.complain(input);
			std::cout << "\n$"; }
		else {
			std::cout << "\nHarl : command not found";
			usleep(1000000);
	       		CoutMenu(); }
		}*/
}

