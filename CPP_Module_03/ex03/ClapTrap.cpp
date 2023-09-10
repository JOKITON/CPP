/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:37:14 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 19:18:07 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	&name) {
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDmg = 0;
	std::cout << "[ClapTrap] " << name << " has been constructed!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "[ClapTrap] " << name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->EnergyPoints < 1) {
		std::cout << this->name << " has no EnergyPoints left!" << std::endl;
		return ;
	}
	this->EnergyPoints -= 1;
	std::cout << "[attack] " << this->name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoints < 1) {
		std::cout << this->name << " has no EnergyPoints left!" << std::endl;
		return ;
	}
	this->EnergyPoints -= 1;
	this->HitPoints += amount;
	std::cout << "[repair] " << this->name << " healed " << amount << " point of health, spending 1 point of energy!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "[damage] " << this->name << " lost " << amount << " point of health, spending 1 point of energy!" << std::endl;
	if (this->HitPoints - amount < 1) {
		std::cout << name << " has died!" << std::endl;
		return ;
	}
	this->HitPoints -= amount;
}

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

void	ClapTrap::setName(std::string name) {
	this->name = name;
}

void	ClapTrap::setHitPoints(int amount) {
	this->HitPoints = amount;
}

void	ClapTrap::setEnergyPoints(int amount) {
	this->EnergyPoints = amount;
}

void	ClapTrap::setAttackDmg(int amount) {
	this->AttackDmg = amount;
}
