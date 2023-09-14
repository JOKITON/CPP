/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:26:02 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/11 19:43:26 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") { // Default Constructor
	std::cout << "[Dog] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Dog::~Dog(void) { // Default Destructor
	std::cout << "[Dog] " << this->getType() << " has been destroyed!" << std::endl;
	return ;
}

void	Dog::makeSound(void) { // 
	std::cout << "[Dog] Wooooof" << std::endl;
	return ;
}
