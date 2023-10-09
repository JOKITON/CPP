/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:48:55 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:53:07 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
    std::string name;

public:

    Zombie(void);
    Zombie( std::string param );
    ~Zombie(void);

    void announce(void);
	Zombie*	zombieHorde( int N, std::string name );
	void	setName(std::string name);
};

#endif

