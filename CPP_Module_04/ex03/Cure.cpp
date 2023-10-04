/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:52:12 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/04 23:56:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << "[Cure] has been constructed." << std::endl;
}

Cure::~Cure( void ) {
	std::cout << "[Cure] has been destroyed." << std::endl;
}

void	Cure::use( ICharacter& p) {
	std::cout << "* heals " << p.getName() << "'s wounds *" << std::endl;
}
