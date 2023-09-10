/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 13:05:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::string name = "Jokin";
	DiamondTrap one(name);
	
	one.FragTrap::attack("Pablo");
	one.ScavTrap::takeDamage(3);
	one.ScavTrap::beRepaired(2);
	one.FragTrap::highFivesGuys();

	
	std::cout << "HitPoints -> " << one.FragTrap::getHealth() << std::endl;
	printf("EnergyPoints-> %d\n", one.ScavTrap::getEnergyPoints());
	std::cout << "AttackDmg -> " << one.FragTrap::getAttackDmg() << std::endl;
	return 0;
}