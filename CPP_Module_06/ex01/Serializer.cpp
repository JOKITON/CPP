/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:01:04 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 16:29:45 by jaizpuru         ###   ########.fr       */
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

	/*  In this case we are using 'reinterpret_cast' due to the situation:
		size_t	= void *;

		Why did not we use 'static_cast' or 'dynamic_cast'?
		Since we did not have any int, float, double value (static_cast),
		And we also did not have two pointers, references (dynamic_cast),
		we must use this type of casting to proceed.
	*/

	uintptr_t	ret = reinterpret_cast<uintptr_t>(ptr);

	std::cout << "[Serializer] '_SERIALIZE_' has been called from '" << ptr->getStr() << "'." << std::endl;

	return ret;
}

Data*	Serializer::deserialize( uintptr_t raw ) {

	/*	This case works the same as before, it is just on reverse order, but works in the same way.

		I have also read that 'reinterpret_cast' can be not safe...
			It cannot be used for anything outside its own type.
			It also cannot cast away the const, volatile, or __unaligned attributes.
			...
	*/

	Data	*ptr = reinterpret_cast<Data *>(raw);

	std::cout << "[Serializer] '_DESERIALIZE_' has been called from '" << ptr->getStr() << "'." << std::endl;

	return ptr;
}
