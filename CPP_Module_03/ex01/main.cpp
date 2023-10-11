/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/12 00:20:12 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	std::string name = "Jokin";
	ScavTrap one(name);
	std::cout << std::endl;
	
	one.attack("Pablo");
	one.takeDamage(3); // inherited
	one.beRepaired(2); // inherited
	one.guardGate();

	std::cout << "\nHitPoints -> " << one.getHealth() << std::endl;
	std::cout << "EnergyPoints -> " << one.getEnergyPoints() << std::endl;
	std::cout << "AttackDmg -> " << one.getAttackDmg() << std::endl;
	std::cout << std::endl;	

	return 0;
}