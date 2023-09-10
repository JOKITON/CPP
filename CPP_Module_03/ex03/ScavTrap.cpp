/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 19:21:06 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDmg(20);
	std::cout << "[ScavTrap] " << this->getName() << " has been constructed!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[ScavTrap] " << this->getName() << " has been destroyed!" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {
	this->setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "[attack] " << this->getName() << " attacks " << target << ", causing " << this->getAttackDmg() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "[(ScavTrap)GuardGate] " << this->getName() << " is now on /'Gate keeper/' mode" << std::endl;
}
