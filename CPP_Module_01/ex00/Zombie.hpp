/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 11:25:48 by jaizpuru         ###   ########.fr       */
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
     * @brief Creates a zombie with the specified name.
     * 
     * This function creates a new Zombie object with the given name
     * and then announces its presence.
     * 
     * @param name The name of the random zombie.
     */
    void randomChump(std::string name);
};

#endif
