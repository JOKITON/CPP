/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:50:30 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/09/19 15:39:22 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::system("clear");
	PhoneBook 	book;
	std::string	input;


	usleep(1000000);
	std::system("clear");
	std::cout << "\n\n\t\tWelcome to los Pollos Hermanos PhoneBook!\n\n";
	
	while (1)
	{
		std::cout << "\tPhoneBook commands:\n\n1. [SEARCH]\n2. [ADD]\n3. [EXIT]\n$";
		std::getline(std::cin, input);
		// Check input and perform actions accordingly
		if (!input.compare("SEARCH"))
			book.contactShow();
		else if (!input.compare("ADD"))
			book.contactAdd();
		else if (!input.compare("EXIT"))
			return (0); // Exit the program
	}
	return (0);
}
