/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:02:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/19 18:40:15 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ex02 Functions
// --------------
FragTrap::FragTrap(std::string& name) : ClapTrap(name) {

	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDmg = 30;
	
	std::cout << "[FragTrap] Constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::string	msg;

	if (this->getHealth() > 0) {
		std::cout << "[FragTrap] " << "Hey!, nice haircut, can you give me a high five!?" << std::endl;
		std::cout << "		input : ";
		std::getline(std::cin, msg);
		std::cout << std::endl; }
	else
		std::cout << "[FrapTrap] " << "(highFivesGuys* did not work) is dead..." << std::endl;
}
