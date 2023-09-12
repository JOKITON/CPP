/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:50:30 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/06/28 08:41:16 by jokin            ###   ########.fr       */
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
		if (!input.compare("SEARCH"))
			book.contactShow();
		else if (!input.compare("ADD"))
			book.contactAdd();
		else if (!input.compare("EXIT"))
			return (0);
	}
	return (0);
}
