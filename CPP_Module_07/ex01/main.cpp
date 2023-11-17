/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:40 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/18 00:03:26 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdio>

void	testsIter( void ) {
	std::string	ar1[3] = {"1", "2", "3"};
	int			ar2[3] = {1, 2, 3};
	float		ar3[3] = {1.4f, 2.3f, 342.4132f};

	std::cout << "std::string[3]: " << std::endl;
	iter(ar1, 3, print<std::string>);
	std::cout << std::endl;
	std::cout << "int[3]: " << std::endl;
	iter(ar2, 3, print<int>);
	std::cout << std::endl;
	std::cout << "float[3]: " << std::endl;
	iter(ar3, 3, print<float>);
	std::cout << std::endl;
}

int	main( void ) {

	// my own tests
	testsIter( );

	return 0;
}
