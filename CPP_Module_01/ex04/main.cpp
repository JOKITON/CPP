/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:26:01 by jokin             #+#    #+#             */
/*   Updated: 2023/07/06 08:54:42 by jokin            ###   ########.fr       */
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
	
	if (s1.empty() || s2.empty()) {
		std::cerr << "String not valid" << std::endl;
		return (1); }
	rpStringInFile(filename, s1, s2);
	return (0);
}

