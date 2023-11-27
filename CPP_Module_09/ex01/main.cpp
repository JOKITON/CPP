/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:39:25 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/27 11:44:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **ar ) {
	if ( ac > 1) {
		/*
		• Your program must take an inverted Polish mathematical expression as an argu-
		ment.
		• The numbers used in this operation and passed as arguments will always be less
		than 10. The calculation itself but also the result do not take into account this rule.
		• Your program must process this expression and output the correct result on the
		standard output.
		• If an error occurs during the execution of the program an error message should be
		displayed on the standard output.
		• Your program must be able to handle operations with these tokens: "+ - / *".
		*/
	}
	else {
		std::cerr << "error: main: not enough arguments" << std::endl;
		return ERROR; }
	return CORRECT;
}
