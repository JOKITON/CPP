/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:02:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 19:21:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDmg(30);
	std::cout << "[FragTrap] " << this->getName() << " has been constructed!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "[FragTrap] " << this->getName() << " has been destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "[(FragTrap)highFivesGuys] " << "Hey!, nice haircut, can you give me a high five!?" << std::endl;
	usleep(4000000);
}
