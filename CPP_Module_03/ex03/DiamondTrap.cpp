/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:49:47 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 19:35:02 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->ClapTrap::setName(name + "_clap_name");
    this->name = name;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDmg(30);
    std::cout << "[DiamondTrap] " << name << " has been constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "[DiamondTrap] " << this->getName() << " has been destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "[DiamondTrap] " << name << " is DiamondTrap class name.\n[DiamondTrap] " << ClapTrap::getName() << " is ClapTrap class name.\n";
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
