/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:18:47 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 11:57:51 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	Zombie::zombieHorde(int N, std::string name) {
	int	i;
	std::cout << "[zombieHorde.cpp(Start)]" << std::endl;
	Zombie	*first = new Zombie();
	Zombie	*firstZombie;

	i = 0;
	firstZombie = 0;
	if (N > i) {
		firstZombie = first->newZombie(name);
		firstZombie->announce();
		i++;
	}
	while (N > i) {
		Zombie	*zombie = first->newZombie(name);
		zombie->announce();
		delete zombie;
		i++;
	}
	delete first;
	std::cout << "[zombieHord.cpp(End)]" << std::endl;
	return (firstZombie);
}
