/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:19:29 by jokin             #+#    #+#             */
/*   Updated: 2023/06/27 09:27:52 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	std::cout << "Contact Constructor was called" << std::endl;
	this->FirstName = "";
	this->LastName = "";
	this->NickName = "";
	this->Phone = "";
	this->Secret = "";
}

Contact::~Contact(void) {
	std::cout << "Contact Destructor was called!" << std::endl;
}

void    Contact::setContact(int id) {
	std::system("clear");
	std::cout << "Enter FirstName : ";
	std::getline(std::cin, this->FirstName);
	std::cout << "\nEnter LastName : ";
	std::getline(std::cin, this->LastName);
	std::cout << "\nEnter NickName : ";
	std::getline(std::cin, this->NickName);
	std::cout << "\nEnter PhoneNumber : ";
	std::getline(std::cin, this->Phone);
	std::cout << "\nEnter Secret : ";
	std::getline(std::cin, this->Secret);
	std:: cout << std::endl;
	this->idContact = id;
	std::system("clear");
}

std::string	Contact::getFirstName(void) const {
	return (FirstName);
}

std::string	Contact::getLastName(void) const {
	return (LastName);
}

std::string	Contact::getNickName(void) const {
	return (NickName);
}

std::string	Contact::getPhone(void) const {
	return (Phone);
}

std::string	Contact::getSecret(void) const {
	return (Secret);
}



