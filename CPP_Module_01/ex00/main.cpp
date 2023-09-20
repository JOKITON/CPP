/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:09:47 by jokin             #+#    #+#             */
/*   Updated: 2023/09/20 13:43:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	std::string	name = "Bob";
	Zombie*	zombie = new Zombie();

	std::cout << "\n**[newZombie] & [Announce] : " << std::endl;
	Zombie*	newZombie = zombie->newZombie(name);

	newZombie->announce();

	std::cout << "\n**[randomChump] :" << std::endl;
	newZombie->randomChump("Anna");
	zombie->randomChump("Frank");
	std::cout << std::endl;
	
	delete newZombie;
	delete zombie;
	return 0;
}
