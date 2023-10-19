/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/19 18:05:22 by jaizpuru         ###   ########.fr       */
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

void ScavTrap::attack(const std::string& target) {
	if (this->EnergyPoints > 0 && this->HitPoints > 0) {
		this->decreaseEnergy(1);
		std::cout << "[ScavTrap] "<< this->name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
		return ;
	}
	if (this->HitPoints <= 0) {
		std::cout << "[ScavTrap] (attack* did not work) "<< this->name << " is dead..." << std::endl;
	}
	if (EnergyPoints <= 0) {
		std::cout << "[ScavTrap] (attack* did not work) "<< this->name << " has no energy points left." << std::endl;
		return ;
	}
}

void	ScavTrap::guardGate(void) {
	if (this->getHealth() <= 0) {
		std::cout << "[ScavTrap] (guardGate* did not work) is dead..." << std::endl;
	}
	else
		std::cout << "[ScavTrap] " << this->name << " is now on /'Gate keeper/' mode" << std::endl;
}
