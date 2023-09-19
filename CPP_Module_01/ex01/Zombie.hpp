/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 11:47:48 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <cstdlib> 

/**
 * @brief The Zombie class represents a zombie entity with a name.
 * 
 * It provides functions to create and announce zombies.
 */
class Zombie {

private:
    std::string name; // Name of the zombie.

public:
    /**
     * @brief Construct a new Zombie object.
     */
    Zombie(void);

    /**
     * @brief Destroy the Zombie object.
     */
    ~Zombie(void);

    /**
     * @brief Announces the presence of the zombie.
     */
    void announce(void);

    /**
     * @brief Creates a new Zombie object with the specified name.
     * 
     * @param name The name of the new zombie.
     * @return Zombie* A pointer to the newly created Zombie object.
     */
    Zombie* newZombie(std::string name);

	/**
	 * @brief Creates and announces N Zombie objects with the given name, and returns a reference to the first Zombie object.
	 * 
	 * This function creates a horde of Zombie objects, each with the specified name, and announces each one. It returns a reference to the first created Zombie object.
	 * 
	 * @param N The number of Zombie objects to create and announce.
	 * @param name The name to assign to each Zombie object.
	 * @return Zombie* A pointer to the first created Zombie object.
	 */
	Zombie*	zombieHorde( int N, std::string name );
	
	/**
	 * @brief Set the Name of a Zombie object.
	 * 
	 * @param name String to change the name.
	 */
	void	setName(std::string name);
};

#endif

