/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:31:50 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/12 17:28:33 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <climits>

#define END "\033[0m"
#define BLACK "\e[4;30m"
#define RED "\e[1;31m"

#define BCYAN "\e[46m"
#define BBLACK "\e[47m"

class	Span {
	private:
		unsigned int	_N;
		std::vector<int>	*_vector;

		class	SpanFailedToFindNumber : public std::exception {
			public:
				virtual const char*	what() const throw() {
					return ("error: exception: 'Span' object run out of space.");
				}
		};
	public:
		Span( void );
		~Span( void );
		Span( const Span & p );
		Span&	operator=( const Span& p );

		Span( unsigned int N );
		void	addNumber( int	number );
		void	addNumbers( void );
		unsigned int		shortestSpan( void );
		unsigned int		longestSpan( void );

		std::vector<int>	getVector( void ) const;
		int					getSize( void ) const;
};

#endif
