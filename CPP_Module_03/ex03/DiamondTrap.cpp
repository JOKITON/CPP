/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:49:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/22 23:21:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

// ex03 Functions
// --------------
DiamondTrap::DiamondTrap(std::string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	
    this->ClapTrap::setName(name + "_clap_name");
    this->_name = name;

    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDmg(30);
    std::cout << "[DiamondTrap] " << name << " has been constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "[DiamondTrap] " << this->_name << " has been destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "[DiamondTrap] " << this->_name << " is DiamondTrap class name.\n[DiamondTrap] " << ClapTrap::getName() << " is ClapTrap class name.\n";
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
