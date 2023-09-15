/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:53:25 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 12:03:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &ref = brain;

	std::cout << "Memory Address:" << std::endl;
       	std::cout << &brain << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << "Values:" << std::endl;
	std::cout << brain << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
