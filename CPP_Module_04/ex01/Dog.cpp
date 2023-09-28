/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:26:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/28 02:43:59 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), Brain( new Brain() ) {
	std::cout << "[Dog] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Dog::~Dog(void) {
	delete Brain;
	std::cout << "[Dog] " << this->getType() << " has been destroyed!" << std::endl;
	return ;
}

void	Dog::makeSound(void) { // 
	std::cout << "[Dog] Wooooof" << std::endl;
	return ;
}
