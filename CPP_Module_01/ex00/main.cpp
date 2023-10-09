/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:09:47 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:41:32 by jaizpuru         ###   ########.fr       */
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
	std::cout << std::endl;
	zombie->randomChump("Frank");
	std::cout << std::endl;
	
	delete newZombie;
	delete zombie;
	return 0;
}
