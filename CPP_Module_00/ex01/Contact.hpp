/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:31:14 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 10:43:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cstring>
#include <unistd.h> 
#include <stdio.h>
#include <string>

// Contact class represents an individual user's contact information, including first name,
// last name, nickname, phone number, and a secret. It is used to store and manage
// information about a single contact in a phone book.
class Contact {

	private:
		std::string FirstName; // First Name of the Contact 
		std::string LastName; // Last Name of the Contact
		std::string NickName; // Nick Name of the Contact
		std::string Phone; // Phone Number of the Contact
		std::string Secret; // Secret of the Contact
		int	    idContact; // Unique Identifier for the Contact
	public:
		// Constructor to initialize Contact object.
		Contact( void );

		// Destructor to clean up the resources associated with Contact object.
		~Contact( void );

		// Getter functions to retrieve specific contact information
		std::string	getFirstName( void ) const;
		std::string	getLastName ( void ) const;
		std::string	getNickName ( void ) const;
		std::string	getPhone ( void ) const;
		std::string	getSecret ( void ) const;	

		// Setter functions to update specific contact information.
		void		setFirstName( std::string param );
		void		setLastName( std::string param  );
		void		setNickName( std::string param  );
		void		setPhone( std::string param  );
		void		setSecret( std::string param  );
		void		setId( int param );
};

#endif
