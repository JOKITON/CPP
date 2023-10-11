/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:53:25 by jokin             #+#    #+#             */
/*   Updated: 2023/10/11 17:51:53 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string brain = "HI THIS IS BRAIN";
	
	// Pointer to string
	std::string *stringPTR = &brain;

	// Reference to string
	std::string &stringREF = brain;

	std::cout << "Memory Address:" << std::endl;
    std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << "Values:" << std::endl;
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
