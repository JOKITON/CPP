/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:40 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/21 12:41:04 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdio>
//#include "Awesome.hpp"

void	testsIter( void ) {
	std::string	ar1[3] = {"1", "2", "3"};
	int			ar2[3] = {1, 2, 3};
	float		ar3[3] = {1.4f, 2.3f, 342.4132f};

	std::cout << "std::string[3]: " << std::endl;
	iter(ar1, 3, ft_string);
	std::cout << std::endl;
	std::cout << "int[3]: " << std::endl;
	iter(ar2, 3, ft_int);
	std::cout << std::endl;
	std::cout << "float[3]: " << std::endl;
	iter(ar3, 3, ft_float);
	std::cout << std::endl;
	std::cout << std::endl;
}

/* void	testsEvaluation( void ) {
	int	tab[] = { 0, 1, 2, 3, 4 };
	Awesome	tab2[5];

	iter(tab, 5, ft_int);
	iter(tab2, 5, ft_Awesome);
} */

int	main( void ) {

	// my own tests
	testsIter( );

	// evaluation tests
	// testsEvaluation( );

	return 0;
}
