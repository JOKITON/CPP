/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:19:29 by jokin             #+#    #+#             */
/*   Updated: 2023/09/14 11:35:27 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	std::cout << "Contact Constructor was called" << std::endl;
}

Contact::~Contact(void) {
	std::cout << "Contact Destructor was called!" << std::endl;
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

void	Contact::setFirstName(std::string param) {
	this->FirstName = param;
}

void	Contact::setLastName(std::string param) {
	this->LastName = param;
}

void	Contact::setNickName(std::string param) {
	this->NickName = param;
}

void	Contact::setPhone(std::string param) {
	this->Phone = param;
}

void	Contact::setSecret(std::string param) {
	this->Secret = param;
}

void	Contact::setId(int param) {
	this->idContact = param;
}
