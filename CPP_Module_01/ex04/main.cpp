/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:26:01 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 18:26:28 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StdReplace.hpp"

int	main(void) {
	clearTerminal();

	std::string	util;
	std::cout << "Enter the filename : ";
	std::cin >> util;
	const std::string	filename = util;

	std::cout << "\n" << "Enter the string you want to replace : ";
	std::cin >> util;
	const std::string	s1 = util;
	
	std::cout << "\n" << "Enter the string you want instead : ";
	std::cin >> util;
	const std::string	s2 = util;
	std::cout << std::endl;
	
	if (s1.empty() || s2.empty() || !s1.compare(s2)) {
		std::cerr << "Not valid arguments" << std::endl;
		return (1); }
	rpStringInFile(filename, s1, s2);
	return (0);
}

