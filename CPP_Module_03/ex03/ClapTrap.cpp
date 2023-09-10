/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:37:14 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 12:49:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	&name) {
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDmg = 0;
	std::cout << "ClapTrap Constructor initialized" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor Called" << std::endl;
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

void	ClapTrap::setHitPoints(int amount) {
	this->HitPoints = amount;
}

void	ClapTrap::setEnergyPoints(int amount) {
	this->EnergyPoints = amount;
}

void	ClapTrap::setAttackDmg(int amount) {
	this->AttackDmg = amount;
}
