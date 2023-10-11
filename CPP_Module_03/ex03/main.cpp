/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/12 01:34:07 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::string name = "Jokin";
	DiamondTrap one(name);
	std::cout << std::endl;
	
	one.attack("Pablo");
	one.takeDamage(30);
	one.beRepaired(20);
	one.highFivesGuys();
	one.whoAmI();
	std::cout << std::endl;
	
	std::cout << "HitPoints -> " << one.getHealth() << std::endl;
	std::cout << "EnergyPoints -> " << one.getEnergyPoints() << std::endl;
	std::cout << "AttackDmg -> " << one.getAttackDmg() << std::endl;
	std::cout << std::endl;

	return 0;
}