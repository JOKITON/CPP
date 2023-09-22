/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:53:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/22 16:11:05 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed *a = new Fixed(); // a is constructed.
	a->setRawBits(3); // a is set to value '3'.

	Fixed b( *a ); // b is constructed and set to value '3'.
	Fixed c; // c is constructed.
	c = *a; // c is given the value of a, '3'.

	b.setRawBits(13); // b is set to value '13'.
	
	a->setRawBits(5);
	std::cout << "A has the value of : " << a->getRawBits() << std::endl;
	std::cout << "B has the value of : " << b.getRawBits() << std::endl;
	std::cout << "C has the value of : " << c.getRawBits() << std::endl;

	delete a;
	return 0;
}