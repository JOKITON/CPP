/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:26:13 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 10:33:40 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

// PhoneBook class represents a collection of Contact objects.
class	PhoneBook {
	
	private:
		Contact	contacts[8]; // Array up to 8 Contacts.
		int	numContacts;	// Current number of Contacts in PhoneBook.
	public:
		// Contructor initializes a new PhoneBook instance.
		PhoneBook( void );

		// Destructor cleans up resources when a PhoneBook instance is destroyed.
		~PhoneBook ( void );

		// Adds a new Contact to the PhoneBook or rewrites an existing one.
		// Does not accept any empty strings and provides a warning before overwriting.
		void	contactAdd( void );

		// Displays the contacts stored in the PhoneBook with a nice interface.
		void	contactShow( void );

		// Allows selecting and displaying an existing contact by index.
		// Display an error message if index is out of bounds.
		void	indexShow(void);
};

#endif
