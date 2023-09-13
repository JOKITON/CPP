/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:31:14 by jokin             #+#    #+#             */
/*   Updated: 2023/09/13 15:18:33 by jaizpuru         ###   ########.fr       */
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
		void		setContact(int id);
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
