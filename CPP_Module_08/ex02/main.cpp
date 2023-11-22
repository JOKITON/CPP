/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:41:22 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/22 17:10:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	execTests( void ) {
	MutantStack<int>	test1;
	std::stack<int>		testStack1;

	MutantStack<int>	test2(testStack1);

	MutantStack<int>	test3;
	test3 = testStack1;

	std::cout << std::endl;
}

int	main( void ) {
	/* my own tests */
	execTests();
}