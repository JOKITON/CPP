/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:50:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/11 19:29:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "[Cat] " << this->getType() << " has been constructed!" << std::endl;
	return ;
}

Cat::~Cat(void) {
	std::cout << "[Cat] " << "has been destroyed!" << std::endl;
	return ;
}

void	Cat::makeSound(void) {
	std::cout << "[Cat] Meowwwww" << std::endl;
	return ;
}
