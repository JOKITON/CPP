/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:09:47 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:00:11 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	std::string	name = "Bob";
	/*Zombie	stack;
	Zombie*	horde = stack.zombieHorde(4, name); //*/
 	Zombie* heap = new Zombie();
	Zombie*	horde = heap->zombieHorde(4, name);
	delete heap;
	delete horde;
	return 0;
}
