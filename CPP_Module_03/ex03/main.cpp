/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/19 18:41:31 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << "\n		||_____----[DiamondTrap]----____||" << std::endl;
	std::string name = "Jokin";
	DiamondTrap *Predator1 = new DiamondTrap(name);
	std::cout << std::endl;
	
	std::cout << "	HitPoints -> " << Predator1->getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << Predator1->getEnergyPoints() << "		<-	(Base stats) " << std::endl;
	std::cout << "	AttackDmg -> " << Predator1->getAttackDmg() << std::endl;
	std::cout << std::endl;

	Predator1->attack("Pablo"); // specially-inherited from ScavTrap
	Predator1->takeDamage(99);
	Predator1->takeDamage(0);
	// Predator1->takeDamage(99);
	// Predator1->takeDamage(-99); // (unsigned converts numbers to large positives)
	Predator1->beRepaired(2);
	Predator1->beRepaired(200);
	// Predator1->beRepaired(-200);
	Predator1->highFivesGuys(); // inherited from FragTrap
	Predator1->whoAmI(); // member function

	std::cout << std::endl;
	std::cout << "	HitPoints -> " << Predator1->getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << Predator1->getEnergyPoints() << "		<-	(After stats) " << std::endl;
	std::cout << "	AttackDmg -> " << Predator1->getAttackDmg() << std::endl;
	std::cout << std::endl;

	delete Predator1;

	return 0;
}