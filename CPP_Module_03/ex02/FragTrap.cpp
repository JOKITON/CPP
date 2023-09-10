/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:02:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/10 12:32:07 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap Constructor called!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor called!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Hey!, nice haircut, can you give me a high five!?" << std::endl;
	usleep(4000000);
}
