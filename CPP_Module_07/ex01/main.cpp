/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:40 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/16 11:42:00 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
//#include "Awesome.hpp"

void	ft_int(int val)
{
	std::cout << val << std::endl;
}

void	ft_float(float val)
{
	std::cout << val << std::endl;
}

void	ft_double(double val)
{
	std::cout << val << std::endl;
}

void	ft_char(const char *val)
{
	std::cout << val << std::endl;
}

void	ft_string(std::string val)
{
	std::cout << val << std::endl;
}

void	testsIter( void ) {
	std::string	ar1[3] = {"1", "2", "3"};
	int			ar2[3] = {1, 2, 3};
	float		ar3[3] = {1.4f, 2.3f, 342.4132f};
	const char		*ar4[3] = {"string1", "string2", "string3"};

	std::cout << "std::string[3]: " << std::endl;
	iter(ar1, 3, ft_string);
	std::cout << std::endl;
	std::cout << "int[3]: " << std::endl;
	iter(ar2, 3, ft_int);
	std::cout << std::endl;
	std::cout << "float[3]: " << std::endl;
	iter(ar3, 3, ft_float);
	std::cout << std::endl;
	std::cout << "char*[3]: " << std::endl;
	iter(ar4, 3, ft_char);
	std::cout << std::endl;
	std::cout << std::endl;
}

void	testsEvaluation( void ) {
	int	tab[] = { 0, 1, 2, 3, 4 };
	Awesome	tab2[5];

	iter(tab, 5, ft_int);
	iter(tab2, 5, ft_Awesome);
}

int	main( void ) {

	// my own tests
	testsIter( );

	// evaluation tests
	testsEvaluation( );

	return 0;
}
