/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:31:14 by jokin             #+#    #+#             */
/*   Updated: 2023/09/14 11:35:32 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <stdlib.h>
#include <iomanip>

class Contact {

	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string Phone;
		std::string Secret;
		int	    idContact;
	public:
		Contact( void );
		~Contact( void );
		std::string	getFirstName( void ) const;
		std::string	getLastName ( void ) const;
		std::string	getNickName ( void ) const;
		std::string	getPhone ( void ) const;
		std::string	getSecret ( void ) const;	
		void		setFirstName( std::string param );
		void		setLastName( std::string param  );
		void		setNickName( std::string param  );
		void		setPhone( std::string param  );
		void		setSecret( std::string param  );
		void		setId( int param );
};

#endif
