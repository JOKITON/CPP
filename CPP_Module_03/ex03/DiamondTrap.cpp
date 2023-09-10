/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:49:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 13:15:26 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	std::cout << "DiamondTrap Constructor called!" << std::endl;
	this->name = name;
	setHitPoints(FragTrap::getHealth());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDmg(FragTrap::getAttackDmg());
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor called!" << std::endl;
}

void	DiamondTrap::attack(std::string& name) {
	ScavTrap::attack(name);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << FragTrap::getName() << " is DiamondTrap class name.\n" << ClapTrap::getName() << " is ClapTrap class name.\n";
}

void DiamondTrap::setHitPoints(int amount) {
    ClapTrap::setHitPoints(amount);
}

void DiamondTrap::setEnergyPoints(int amount) {
    ClapTrap::setEnergyPoints(amount);
}

void DiamondTrap::setAttackDmg(int amount) {
    FragTrap::setAttackDmg(amount);
}
