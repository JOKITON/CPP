/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 19:15:13 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::string name = "Jokin";
	DiamondTrap one(name);
	
	one.attack("Pablo");
	one.takeDamage(30);
	one.beRepaired(20);
	one.highFivesGuys();
	one.whoAmI();
	
	std::cout << "HitPoints -> " << one.getHealth() << std::endl;
	printf("EnergyPoints-> %d\n", one.getEnergyPoints());
	std::cout << "AttackDmg -> " << one.getAttackDmg() << std::endl;
	return 0;
}