/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:57:09 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 11:25:40 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a zombie with the specified name.
 * 
 * This function creates a new Zombie object with the given name
 * and then announces its presence.
 * 
 * @param name The name of the random zombie.
 */
void	Zombie::randomChump(std::string name) {
	Zombie	temp;

	temp.name = name;
	std::cout << temp.name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

