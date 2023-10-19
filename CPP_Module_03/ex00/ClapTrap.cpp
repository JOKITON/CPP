/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:37:14 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/19 18:00:04 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ex00 Functions
// --------------

ClapTrap::ClapTrap(std::string	&name) : name(name), HitPoints(10), EnergyPoints(10), AttackDmg(0) {
	std::cout << "[ClapTrap] Default constructor" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "[ClapTrap] Default destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->EnergyPoints > 0 && this->HitPoints > 0) {
		this->EnergyPoints -= 1;
		std::cout << "[ClapTrap] "<< this->name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
		return ;
	}
	if (this->HitPoints <= 0) {
		std::cout << "[ClapTrap] (attack* did not work) "<< this->name << " is dead..." << std::endl;
	}
	if (EnergyPoints <= 0) {
		std::cout << "[ClapTrap] (attack* did not work) "<< this->name << " has no energy points left." << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	amount = amount > 11 ? 10 : amount; // amount checker

	if (this->EnergyPoints > 0 && this->HitPoints > 0) {
		this->EnergyPoints -= 1;
		std::cout << "[ClapTrap] " << this->name << " healed " << amount << " point of health, spending 1 point of energy!" << std::endl;
		this->HitPoints += amount; // HitPoints checker
		HitPoints = HitPoints > 11 ? 10 : HitPoints;
		return ; }
	
	else if (this->HitPoints <= 0) {
		std::cout << "[ClapTrap] (beRepaired* did not work) "<< this->name << " is dead..." << std::endl;
	}

	else if (this->EnergyPoints <= 0) {
		std::cout << "[ClapTrap] (beRepaired* did not work) "<< this->name << " has no energy points left." << std::endl;
		return ;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {

	amount = amount > 11 ? 10 : amount;

	if (this->HitPoints <= 0) {
		std::cout << "[ClapTrap] (takeDamage* did not work) " << this->name << " is dead..." << std::endl;
		return ;
	}

	if ((HitPoints - (int)amount) <= 0)  // checkers for amount & HP
		amount = HitPoints;
	
	this->HitPoints -= amount;

	HitPoints = HitPoints < 0 ? 0 : HitPoints;

	std::cout << "[ClapTrap] " << this->name << " lost " << amount << " point(s) of health!" << std::endl;

	if (this->HitPoints <= 0) {
		std::cout << "[ClapTrap] " << this->name << " has died..." << std::endl;
	}
}
