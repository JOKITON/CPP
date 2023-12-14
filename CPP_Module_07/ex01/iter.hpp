/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:10:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 15:40:39 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename D, typename L, typename F>
void	iter(D* ar, L length, F	func) {
	int	temp = 0;
	for (temp = 0; temp < length; temp++)
		func(ar[temp]);
}

/* Evaluation, Blueprint for 'Awesome.hpp' */
/* #include <iostream>

class Awesome {
	public:
		Awesome( void ) : _n(42) { return ; }
		int	get( void ) const { return this->_n; }
	
	private:
		int	_n;
};

std::ostream& operator<<(std::ostream& o, Awesome const & rhs ) {
	o << rhs.get();
	return o;
}

static	void	ft_Awesome( Awesome& val )
{
	std::cout << val << std::endl;
}

template<typename T>
void	print( T const & x ) { std::cout << x << std::endl; return; }
 */
#endif