/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:36:01 by jokin             #+#    #+#             */
/*   Updated: 2023/09/20 12:59:19 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <unistd.h>

enum LogLevel {
  DEBUG,
  INFO,
  WARNING,
  ERROR
};

class	Harl {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	
	public:
		Harl( void );
		~Harl( void );
		int		checkStr( std::string arg);
		void	complain( std::string level );

};

void	HarlLife(void);



#endif
