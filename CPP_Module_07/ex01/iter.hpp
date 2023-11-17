/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:10:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/18 00:02:36 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

/* template<typename Y>

void	isOne( const Y cmp) { // unsolved...
	std::string	test1 = dynamic_cast<std::string>(cmp);

	if (test1.compare("1"))
		std::cout << "This is the chosen one..." << std::endl;
	else
		std::cout << "Keep searching..." << std::endl;

	int			test2 = dynamic_cast<int>(cmp);

	if (cmp == 1)
		std::cout << "This is the chosen one..." << std::endl;
	else
		std::cout << "Keep searching..." << std::endl;
} */

template<typename 	T>

void	print( const T& cmp ) {
	std::cout << cmp << std::endl;
}

template <typename D, typename L ,typename F>

void	iter(D* ar, L length, F& func) {

	while (--length >= 0) {
		func(ar[length]);
	}
}



#endif
