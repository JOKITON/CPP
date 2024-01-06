/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:47:25 by jaizpuru          #+#    #+#             */
/*   Updated: 2024/01/06 13:17:35 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **ar ) {

	if (ac > 1) {// program takes 1 file as argument
		 try {
			BitcoinExchange	test1(ar[1]);
		}
		catch ( std::exception& e ) {
			std::cerr << e.what() << std::endl;
		}
		/*
			A valid date will have this format: Year-Month-Day (2004-06-13).
			A valid value must be either a float or a positive integer : 0-1000.

			- You must use a container to validate the exercise.
			- Handle possible errors with appropiate methods, exceptions, return values...

			- If the date does not exist, use the closest lower date there is in the database.
		*/
	}
	else
		std::cerr << "Error: could not open file." << std::endl;
}
