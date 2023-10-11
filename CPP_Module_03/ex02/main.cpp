/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/12 00:59:31 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	std::string name = "Jokin";
	FragTrap one(name);
	std::cout << std::endl;
	
	one.attack("Pablo");
	one.takeDamage(3);
	one.beRepaired(2);
	one.highFivesGuys();

	std::cout << "	HitPoints -> " << one.getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << one.getEnergyPoints() << std::endl;
	std::cout << "	AttackDmg -> " << one.getAttackDmg() << std::endl;
	std::cout << std::endl;

	return 0;
}