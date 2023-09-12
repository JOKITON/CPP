/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:15:07 by jokin             #+#    #+#             */
/*   Updated: 2023/06/28 08:53:45 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook Constructor was called" << std::endl;
	this->numContacts = 0; 
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook Destructor was called" << std::endl; }


void	PhoneBook::contactAdd(void) {
	if (this->numContacts == 8) {
		this->contacts[0].setContact(0);	
	}
	else {
		this->contacts[this->numContacts].setContact(this->numContacts);
		this->numContacts++;
	}
}

void	PhoneBook::contactShow(void) {
	int	i;

	i = 0;
	if (this->numContacts == 0) {
		std::cout << "No Contacts saved!\n\n";
		usleep(1000000);
		std::system("clear");
		return ;
	}
	std::cout << "\t\tPhoneBook : \n\n\n";
	while (i < this->numContacts) {
		std::string	truncFirstName = this->contacts[i].getFirstName().substr(0, 10);
		std::string	truncLastName = this->contacts[i].getLastName().substr(0, 10);
		std::string	truncNickName = this->contacts[i].getNickName().substr (0, 10);
		std::string	truncPhone = this->contacts[i].getPhone().substr (0, 10);
		std::string	trunctSecret = this->contacts[i].getSecret().substr(0, 10);
		if (truncFirstName.length() > 9)
			truncFirstName[9] = '.';
		if (truncLastName.length() > 9)
			truncLastName[9] = '.';
		if (truncNickName.length() > 9)
			truncNickName[9] = '.';
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << truncFirstName << "|" << std::setw(10) << truncLastName << "|" << std::setw(10) << truncNickName << std::endl;
		i++;
	}
}
