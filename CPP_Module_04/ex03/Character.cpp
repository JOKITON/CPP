/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 00:11:21 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/05 00:20:23 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = new AMateria();
	}
	std::cout << "[Character] constructor called." << std::endl;
}

Character::~Character( void ){
	for (int it = 0; it < 4; it++) {
		delete slots[it];
	}
	std::cout << "[Character] constructor called." << std::endl;
}
