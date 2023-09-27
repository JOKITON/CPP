/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/09/28 01:52:14 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib> 

class Zombie {

private:
    std::string name;

public:

    Zombie(void);
    ~Zombie(void);

    void announce(void);
    Zombie* newZombie(std::string name);
	Zombie*	zombieHorde( int N, std::string name );
	void	setName(std::string name);
};

#endif

