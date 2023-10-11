/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:37:14 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/12 01:37:41 by jaizpuru         ###   ########.fr       */
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
	this->EnergyPoints -= 1;
	std::cout << "[ClapTrap] " << this->name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->EnergyPoints -= 1;
	std::cout << "[ClapTrap] " << this->name << " healed " << amount << " point of health, spending 1 point of energy!" << std::endl;
	this->HitPoints += amount;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->EnergyPoints -= 1;;
	std::cout << "[ClapTrap] " << this->name << " lost " << amount << " point of health, spending 1 point of energy!" << std::endl;
	this->HitPoints -= amount;
}

// ex01 Functions
// --------------
std::string ClapTrap::getName() const {
    return name;
}

int ClapTrap::getAttackDmg() const {
    return AttackDmg;
}

int	ClapTrap::getEnergyPoints() const {
	return EnergyPoints;
}

int	ClapTrap::getHealth() const {
	return HitPoints;
}

void	ClapTrap::decreaseEnergy(int amount) {
	this->EnergyPoints -= amount;
}
