/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:09:47 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:46:23 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	std::string	name = "Bob";
 	Zombie* heap = new Zombie();
	Zombie*	horde = heap->zombieHorde(4, name);
	std::cout << std::endl;
	
	horde->announce();
	delete heap;
	delete[] horde;
	return 0;
}
