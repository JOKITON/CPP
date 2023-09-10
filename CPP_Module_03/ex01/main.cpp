/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 12:29:44 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	std::string name = "Jokin";
	ScavTrap one(name);
	
	one.attack("Pablo");
	one.takeDamage(3);
	one.beRepaired(2);
	one.guardGate();
	std::cout << "HitPoints -> " << one.getHealth() << std::endl;
	printf("EnergyPoints-> %d\n", one.getEnergyPoints());
	std::cout << "AttackDmg -> " << one.getAttackDmg() << std::endl;
	return 0;
}