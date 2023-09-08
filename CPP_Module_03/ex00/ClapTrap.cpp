/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:37:14 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/08 18:07:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	&name) {
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDmg = 0;
	std::cout << "Default Constructor initialized" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Default Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	this->EnergyPoints -= 1;
	std::cout << this->name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->EnergyPoints -= 1;
	std::cout << this->name << " healed " << amount << " point of health, spending 1 point of energy!" << std::endl;
	this->HitPoints += amount;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->EnergyPoints -= 1;;
	std::cout << this->name << " lost " << amount << " point of health, spending 1 point of energy!" << std::endl;
	this->HitPoints -= amount;
}
