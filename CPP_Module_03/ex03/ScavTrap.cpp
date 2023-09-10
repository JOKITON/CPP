/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:58:18 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 12:49:29 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string& name) : ClapTrap(name){
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDmg(20);
	std::cout << "ScavTrap Constructor Initialized" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor Initialized" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << this->getName() << " attacks " << target << ", causing " << this->getAttackDmg() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " is now on /'Gate keeper/' mode" << std::endl;
}
