/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 02:31:36 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ex01 Functions
// --------------
ScavTrap::ScavTrap(std::string& name) : ClapTrap(name){
	std::cout << "[ScavTrap] Constructor Initialized" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[ScavTrap] Destructor Initialized" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {
	this->decreaseEnergy(1);
	std::cout << this->getName() << " attacks " << target << ", causing " << this->getAttackDmg() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " is now on /'Gate keeper/' mode" << std::endl;
}
