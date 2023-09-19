/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:19:29 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 10:23:39 by jaizpuru         ###   ########.fr       */
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

/**
 * @brief Get the FirstName of a Contact.
 * 
 * @return The FirstName as std::string.
 */
std::string	Contact::getFirstName(void) const {
	return (FirstName);
}

/**
 * @brief Get the LastName of a Contact.
 * 
 * @return The LastName as std::string.
 */
std::string	Contact::getLastName(void) const {
	return (LastName);
}

/**
 * @brief Get the NickName of a Contact.
 * 
 * @return The NickName as std::string.
 */
std::string	Contact::getNickName(void) const {
	return (NickName);
}

/**
 * @brief Get the Phone Number of a Contact.
 * 
 * @return The PhoneNumber as std::string.
 */
std::string	Contact::getPhone(void) const {
	return (Phone);
}

/**
 * @brief Get the Secret of a Contact.
 * 
 * @return The Secret as std::string.
 */
std::string	Contact::getSecret(void) const {
	return (Secret);
}

/**
 * @brief Sets the given parameter as the FirstName value inside Contact.
 * 
 * @param param 
 */
void	Contact::setFirstName(std::string param) {
	this->FirstName = param;
}

/**
 * @brief Sets the given parameter as LastName value inside Contact.
 * 
 * @param param 
 */
void	Contact::setLastName(std::string param) {
	this->LastName = param;
}

/**
 * @brief Sets the given parameter as NickName value inside Contact.
 * 
 * @param param 
 */
void	Contact::setNickName(std::string param) {
	this->NickName = param;
}

/**
 * @brief Sets the given parameter as Phone value inside Contact.
 * 
 * @param param 
 */
void	Contact::setPhone(std::string param) {
	this->Phone = param;
}

/**
 * @brief Sets the given parameter as Secret value inside Contact.
 * 
 * @param param 
 */
void	Contact::setSecret(std::string param) {
	this->Secret = param;
}

/**
 * @brief Sets the given parameter as ID inside Contact.
 * 
 * @param param 
 */
void	Contact::setId(int param) {
	this->idContact = param;
}
