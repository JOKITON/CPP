/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:26:13 by jokin             #+#    #+#             */
/*   Updated: 2023/06/27 08:58:08 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cstring>
#include <unistd.h> 
#include <stdio.h>

class	PhoneBook {
	
	private:
		Contact	contacts[8];
		int	numContacts;
	public:
		PhoneBook( void );
		~PhoneBook ( void );
		void	contactAdd( void );
		void	contactShow( void );
};

#endif
