/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:40 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 15:38:12 by jaizpuru         ###   ########.fr       */
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
	
	std::cout << "max(aP, bP) : " << max(aP, bP) << std::endl;
	std::cout << "min(aP, bP) : " << min(aP, bP) << std::endl;

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ swap ]-----------------------" << END << std::endl;
	swap(aP, bP);

	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[printValues]-----------------------" << END << std::endl;
	std::cout << "aP : " << *aP << std::endl;
	std::cout << "bP : " << *bP << std::endl;
}

void	testsChar( void ) {
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ testsChar ]-----------------------" << END << std::endl;

	char	a = 'F';
	char	b = 'G';
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ printData ]-----------------------" << END << std::endl;
	std::cout << "a : " << (a) << std::endl;
	std::cout << "b : " << (b) << std::endl;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ min & max ]-----------------------" << END << std::endl;

	std::cout << "max(a, b) : " << max(a, b) << std::endl;
	std::cout << "min(a, b) : " << min(a, b) << std::endl;
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ swap ]-----------------------" << END << std::endl;
	swap(a, b);
	
	std::cout << std::endl;
	std::cout << BBLACK << RED << "-----------------------[ printData ]-----------------------" << END << std::endl;
	std::cout << "a : " << (a) << std::endl;
	std::cout << "b : " << (b) << std::endl;

}

void	testsSubject( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
}

/* void	testsEvaluation( void ) {
	Awesome a(2), b(4);

	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
} */

int	main( void ) {
	
	/* subject tests */
	testsSubject();

	/* evaluation tests */
	// testsEvaluation();

/* 	// my own tests
	testsInt( );

	testsChar( ); */

	return 0;
}