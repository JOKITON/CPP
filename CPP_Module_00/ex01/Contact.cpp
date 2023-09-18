/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:19:29 by jokin             #+#    #+#             */
/*   Updated: 2023/09/18 17:59:27 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 * @brief Construct a new Contact:: Contact object
 * 
 */
Contact::Contact(void) {
	std::cout << "[Contact] Constructor was called" << std::endl;
}

/**
 * @brief Destroy the Contact:: Contact object
 * 
 */
Contact::~Contact(void) {
	std::cout << "[Contact] Destructor was called!" << std::endl;
}

/*
	(An object is created from a class, it can be either from a standard library,
	like 'iostream' or a user-made one 'Contact')
	
	* Why do we use functions to change or read information inside an Object?
	
	For example, we want to have an Object created and ACCESSIBLE for reading and writing from Class 'Contact' in a function outside this Class,
	just like 'main' in 'main.cpp'.
	
	! We cannot access private variables or functions from an Object without having the help of public
	! functions like these:
	
	getFirstName, getLastName, ...
	setFirstName, setLastName, ...

	Their main goal is to make the private variables accesible for reading and writing.

//*/

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
