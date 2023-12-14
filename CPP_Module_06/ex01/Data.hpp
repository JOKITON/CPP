/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:44:11 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/12/14 15:06:22 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

#define END "\033[0m"
#define BLACK "\033[4;30m"
#define RED "\033[1;31m"

#define BCYAN "\033[46m"
#define BBLACK "\033[47m"

class Data {
	private:
		std::string	_str;
		int					_numb;
	public:
		Data( void );
		~Data( void );
		Data( const std::string& str, int numb );
		Data( const Data& p );
		Data&	operator=( const Data& p );

		friend std::ostream&	operator<<( std::ostream& os, const Data& p );

		const std::string& 	getStr( void ) const;
		int				getInt( void ) const;

};

#endif
