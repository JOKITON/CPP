/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:18:47 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:46:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name) {
	std::cout << "\n[zombieHorde.cpp(Start)]" << std::endl;

	int	i = 0;
	Zombie	*first = new Zombie[N];
	
	while (N > i) {
		first[i].setName(name);
		first[i].announce();
		i++;
	}

	std::cout << "[zombieHord.cpp(End)]" << std::endl;
	return (first);
}
