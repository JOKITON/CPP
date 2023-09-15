/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:09:47 by jokin             #+#    #+#             */
/*   Updated: 2023/09/14 16:16:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	std::string	name = "Bob";
	//Zombie*	zombie = new Zombie();
	//Zombie*	newZombie = zombie->newZombie(name);
	Zombie zombie;
	Zombie*	newZombie = zombie.newZombie(name);

	newZombie->announce();
	delete newZombie;
	return 0;
}
