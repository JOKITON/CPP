/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:48:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/10/04 23:55:15 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	std::cout << "[Ice] has been constructed." << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "[Ice] has been destroyed." << std::endl;
}

void	Ice::use(ICharacter& p) {
	std::cout << "[Ice] * shoots an ice bolt at " << p.getName() << " *" << std::endl;
}
