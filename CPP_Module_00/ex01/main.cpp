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

/*
int	main(void)
{
	PhoneBook 	phonebook;
	std::string	input;

	std::system("clear");
	std::cout << "1. ADD\n" << "2. SEARCH\n" << "3. EXIT\n\n$"; 
	while (1)
	{
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			addData(&phonebook);
		else if (!input.compare("SEARCH"))
			phonebook.displayPhoneBook();
		else if (!input.compare("EXIT"))
			exit (1);
		else
			std::cout << "error: command not found\n$";
	}
	return (0);
}*/

