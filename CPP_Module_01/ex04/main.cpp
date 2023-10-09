/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:26:01 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 17:00:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StdReplace.hpp"

int	main(void) {
	clearTerminal();

	std::string	util;
	util = "";
	while (util == "") {
		std::cout << "Enter the filename : ";
		std::getline(std::cin, util); }
	const std::string	filename = util;

	util = "";
	while (util == "") {
	std::cout << "\n" << "Enter the string you want to replace : ";
	std::getline(std::cin, util); }
	const std::string	s1 = util;
	
	util = "";
	while (util == "") {
	std::cout << "\n" << "Enter the string you want instead : ";
	std::getline(std::cin, util); }
	const std::string	s2 = util;
	std::cout << std::endl;
	
	if (!s1.compare(s2)) {
		std::cerr << "error: enter two DIFFERENT words you want to replace." << std::endl;
		return (1); }
	rpStringInFile(filename, s1, s2);
	return (0);
}

