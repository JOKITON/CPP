/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/12 01:37:31 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ex01 Functions
// --------------
ScavTrap::ScavTrap(std::string& name) : ClapTrap(name){

	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDmg = 20;

	std::cout << "[ScavTrap] Constructor Initialized" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[ScavTrap] Destructor Initialized" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {
	this->decreaseEnergy(1);
	std::cout << "[ScavTrap] " << this->name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "[ScavTrap] " << this->name << " is now on /'Gate keeper/' mode" << std::endl;
}
