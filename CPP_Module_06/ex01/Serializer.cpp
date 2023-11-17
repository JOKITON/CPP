/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:01:04 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 11:42:43 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) {
	std::cout << "[Serializer] Default constructor called." << std::endl;
}

Serializer::~Serializer( void ) {
	std::cout << "[Serializer] Default destructor called." << std::endl;
}

Serializer::Serializer( const Serializer& p ) {
	std::cout << "[Serializer] There is nothing to copy..." << std::endl;
	std::cout << "[Serializer] Adress of p :" << &p << std::endl;
}

Serializer&	Serializer::operator=( const Serializer& p ) {
	if (this != &p)
		std::cout << "[Serializer] There is nothing to copy..." << std::endl;
	return *this;
}

uintptr_t	Serializer::serialize( Data*	ptr ) {
	uintptr_t	ret = reinterpret_cast<uintptr_t>(ptr);

	std::cout << "[Serializer] '_SERIALIZE_' has been called from '" << ptr->getStr() << "'." << std::endl;

	return ret;
}

Data*	Serializer::deserialize( uintptr_t raw ) {
	Data	*ptr = reinterpret_cast<Data *>(raw);

	std::cout << "[Serializer] '_DESERIALIZE_' has been called from '" << ptr->getStr() << "'." << std::endl;

	return ptr;
}
