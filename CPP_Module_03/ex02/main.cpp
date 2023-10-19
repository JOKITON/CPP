/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/19 18:42:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	std::cout << "\n		||_____----[FragTrap]----____||" << std::endl;
	std::string name = "Jokin";
	FragTrap *Predator1 = new FragTrap(name);
	std::cout << std::endl;
	
	std::cout << "	HitPoints -> " << Predator1->getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << Predator1->getEnergyPoints() << "		<-	(Base stats) " << std::endl;
	std::cout << "	AttackDmg -> " << Predator1->getAttackDmg() << std::endl;
	std::cout << std::endl;

	Predator1->attack("Pablo");
	Predator1->takeDamage(99);
	Predator1->beRepaired(2);
	Predator1->highFivesGuys();

	std::cout << std::endl;
	std::cout << "	HitPoints -> " << Predator1->getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << Predator1->getEnergyPoints() << "		<-	(After stats) " << std::endl;
	std::cout << "	AttackDmg -> " << Predator1->getAttackDmg() << std::endl;
	std::cout << std::endl;

	delete Predator1;

	std::cout << "\n		||_____----[ScavTrap]----____||" << std::endl;

	ScavTrap *Predator2 = new ScavTrap(name);
	std::cout << std::endl;
	
	std::cout << "	HitPoints -> " << Predator2->getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << Predator2->getEnergyPoints() << "		<-	(Base stats) " << std::endl;
	std::cout << "	AttackDmg -> " << Predator2->getAttackDmg() << std::endl;
	std::cout << std::endl;

	Predator2->attack("Pablo");
	Predator2->takeDamage(99);
	Predator2->beRepaired(2);
	Predator2->guardGate();

	std::cout << std::endl;
	std::cout << "	HitPoints -> " << Predator2->getHealth() << std::endl;
	std::cout << "	EnergyPoints -> " << Predator2->getEnergyPoints() << "		<-	(After stats) " << std::endl;
	std::cout << "	AttackDmg -> " << Predator2->getAttackDmg() << std::endl;
	std::cout << std::endl;

	delete Predator2;
	return 0;
}