/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:18:47 by jokin             #+#    #+#             */
/*   Updated: 2023/06/30 08:51:46 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	Zombie::zombieHorde(int N, std::string& name) {
	int	i;
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
	return (firstZombie);
}
