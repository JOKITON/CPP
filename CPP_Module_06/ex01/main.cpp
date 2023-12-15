/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:00:06 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/15 17:24:40 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void	execSerializer( void ) {

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[execTestsSerializer]-----------------------" << END << std::endl;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Constructors]-----------------------" << END << std::endl;
	
	Data		*data1 = new Data("jokiton", 2);
	Data		*data2 = new Data("dani", 43);

	Data		*newData1;
	Data		*newData2;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[serialize/deserialize()]-----------------------" << END << std::endl;

	uintptr_t ptr1 = (Serializer::serialize(data1)); // data -> uintprt_t
	uintptr_t ptr2 = (Serializer::serialize(data2)); // data -> uintprt_t
	std::cout << std::endl;

	newData1 = Serializer::deserialize(ptr1); // uintptr_t -> data
	newData2 = Serializer::deserialize(ptr2); // uintptr_t -> data

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[printData]-----------------------" << END << std::endl;

	std::cout << "*data1*: " << *data1;
	std::cout << "*data2*: " << *data2;
	std::cout << std::endl;

	std::cout << "newData1: " << *newData1;
	std::cout << "newData2: " << *newData2;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[CopyConstructor && overloadAssignment]-----------------------" << END << std::endl;

	std::cout << "Data	*newData3(newData1);" << std::endl;
	Data	*newData3(newData1);
	std::cout << "newData3: " << *newData3 << std::endl;

	std::cout << "newData1 = newData2;" << std::endl;
	*newData1 = *newData2;
	std::cout << "newData1: " << *newData1;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[Destructors]-----------------------" << END << std::endl;
	delete		data1;
	delete		data2;
}

int	main( void ) {

	/* Serializer tests */
	execSerializer();

	return 0;
}
