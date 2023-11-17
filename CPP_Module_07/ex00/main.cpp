/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:40 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 17:57:36 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	testsInt( void ) {

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[testsInt()]-----------------------" << END << std::endl;

	int	a = 5;
	int	b = 6;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[printValues]-----------------------" << END << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ max & int ]-----------------------" << END << std::endl;

	std::cout << "max(a, b) : " << max(a, b) << std::endl;
	std::cout << "min(a, b) : " << min(a, b) << std::endl;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ swap ]-----------------------" << END << std::endl;
	swap(a, b);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[printValues]-----------------------" << END << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[testsInt*()]-----------------------" << END << std::endl;

	int	*aP = &a;
	int	*bP = &b;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[printValues]-----------------------" << END << std::endl;
	std::cout << "aP : " << *aP << std::endl;
	std::cout << "bP : " << *bP << std::endl;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ max & int ]-----------------------" << END << std::endl;
	
	std::cout << max(aP, bP) << std::endl;
	std::cout << min(aP, bP) << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ swap ]-----------------------" << END << std::endl;
	swap(aP, bP);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[printValues]-----------------------" << END << std::endl;
	std::cout << "aP : " << *aP << std::endl;
	std::cout << "bP : " << *bP << std::endl;
}

void	testsChar( void ) {
	char	a = 'F';
	char	b = 'G';
	
	std::cout << "a : " << (a) << std::endl;
	std::cout << "b : " << (b) << std::endl;
	
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	swap(a, b);
	
	std::cout << "a : " << (a) << std::endl;
	std::cout << "b : " << (b) << std::endl;

	std::string	aP = "Tren";
	std::string	bP = "Autobus";
	
	std::cout << "a : " << (aP) << std::endl;
	std::cout << "b : " << (bP) << std::endl;
	
	std::cout << max(aP[0], bP[0]) << std::endl;
	std::cout << min(aP[0], bP[0]) << std::endl;
	swap(aP, bP);
	
	std::cout << "a : " << (aP) << std::endl;
	std::cout << "b : " << (bP) << std::endl;
}

int	main( void ) {
	
	/* my own tests */
	testsInt( );

	testsChar( );

	return 0;
}