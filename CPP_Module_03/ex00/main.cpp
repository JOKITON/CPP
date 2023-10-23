/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:48:16 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/23 16:50:34 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	execTests0( void ) {
	std::cout << "\n		||_____----[ClapTrap]----____||" << std::endl;
	std::string name = "Jokin";
	// std::string name = ""; // error-case
	ClapTrap one(name);
	std::cout << std::endl;	

	std::cout << "		: ClapTrap base stats : \n	Health : 10\n	EnergyPoints : 10\n	AttackDmg : 0\n" << std::endl;
	
	std::cout << "___---attack()---____\n";
	one.attack(""); // error-case
	one.attack("Pablo");
	one.attack("Enaitz");
	std::cout << "\n___---takeDamage()---____\n";
	one.takeDamage(2);
	one.takeDamage(2);
	one.takeDamage(5);
	std::cout << "\n___---beRepaired()---____\n";
	// one.beRepaired(900); // error-case
	// one.takeDamage(600);
	one.beRepaired(40);
	one.takeDamage(-40);
	one.beRepaired(9);
	one.takeDamage(7); 
	one.attack("Mikel");

	std::cout << std::endl;

}

int	main(void) {

	// ClapTrap
	execTests0();

	return 0;
}