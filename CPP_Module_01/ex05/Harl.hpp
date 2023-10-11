/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:36:01 by jokin             #+#    #+#             */
/*   Updated: 2023/10/11 17:36:05 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
		int		checkStr( std::string arg );

};

void	HarlLife(void);

#endif
