/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:52:01 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:40:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Construct a new Zombie:: Zombie object
 * 
 */
Zombie::Zombie(void) {
	std::cout << "[Zombie] Constructor has been called for (none)!" << std::endl; }

Zombie::Zombie( std::string param ) {
	this->name = param;

	if (this->name == "")
		std::cout << "[Zombie] Constructor has been called for (none)!" << std::endl;
	else
		std::cout << "[Zombie] Constructor has been called for " << this->name << "!" << std::endl;
}

/**
 * @brief Destroy the Zombie:: Zombie object
 * 
 */
Zombie::~Zombie(void) {
	if (this->name != "")
		std::cout << "[Zombie] Destructor has been called for " << this->name << "!" << std::endl;
	else
		std::cout << "[Zombie] Destructor has been called for (none)!" << std::endl;
}

/**
 * @brief Announces the presence of the zombie.
 * 
 */
void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
