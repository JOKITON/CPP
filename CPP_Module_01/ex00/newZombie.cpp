/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:56:08 by jokin             #+#    #+#             */
/*   Updated: 2023/09/20 13:44:21 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a new Zombie object with the specified name in the heap (allocated).
 * 
 * @param name The name of the new zombie.
 * @return Zombie* A pointer to the newly created Zombie object.
 */
Zombie	*Zombie::newZombie(std::string name) {
	Zombie *newZombie = new Zombie();

	newZombie->name = name;
	return (newZombie);
}

