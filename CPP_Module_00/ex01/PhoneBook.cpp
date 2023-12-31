/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:15:07 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 10:43:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Construct a new Phone Book:: Phone Book object
 * 
 */
PhoneBook::PhoneBook(void) {
	std::cout << "[PhoneBook] Constructor was called" << std::endl;
	this->numContacts = 0; 
}
/**
 * @brief Destroy the Phone Book:: Phone Book object
 * 
 */
PhoneBook::~PhoneBook(void) {
	std::cout << "[PhoneBook] Destructor was called" << std::endl; }

/**
 * @brief Adds a new contact or rewrites an existing contact in the PhoneBook.
 *        It does not accept empty strings and warns before overwriting.
 */
void	PhoneBook::contactAdd(void) {
	std::string str;

	str = "";
	std::system("clear");
	if (this->numContacts > 7) {
		std::cout << "You are about to rewrite a existent Contact!" << std::endl;
	}
	while (!std::cin.eof() && str == "") {
	std::cout << "Enter FirstName : ";
	if (std::getline(std::cin, str) && str != "")
		this->contacts[this->numContacts % 8].setFirstName(str);
	}
	str = "";
 	while (!std::cin.eof() && str == "") {
	std::cout << "\nEnter LastName : ";
	if (std::getline(std::cin, str) && str != "")
		this->contacts[this->numContacts % 8].setLastName(str);
	}
	str = "";
	while (str == "") {
	std::cout << "\nEnter NickName : ";
	if (std::getline(std::cin, str) && str != "")
		this->contacts[this->numContacts % 8].setNickName(str);
	}
	str = "";
	while (str == "") {
	std::cout << "\nEnter PhoneNumber : ";
	if (std::getline(std::cin, str) && str != "")
		this->contacts[this->numContacts % 8].setPhone(str);
	}
	str = "";
	while (str == "") {
	std::cout << "\nEnter Secret : ";
	if (std::getline(std::cin, str) && str != "")
		this->contacts[this->numContacts % 8].setSecret(str);
	}
	std:: cout << std::endl;
	this->contacts[this->numContacts % 8].setId(this->numContacts % 8);
	std::system("clear");
	this->numContacts++;
}

/**
 * @brief Displays the contacts stored in the PhoneBook with a nice interface.
 */
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
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "FirstName" << "|" << std::setw(10) << "LastName" << "|" << std::setw(10) << "NickName" << "|||||" << std::endl; 
	std::cout << "-------------------------------------------------" << std::endl;
	while (i < (8)) {
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
		std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << truncFirstName << "|" << std::setw(10) << truncLastName << "|" << std::setw(10) << truncNickName << "|||||" << std::endl;
		i++;
	}
	std::cout << "-------------------------------------------------" << std::endl;
	indexShow();
}


/**
 * @brief Allows selecting and displaying an existing contact by index.
 *        Displays an error message if the index is out of bounds.
 */
void	PhoneBook::indexShow(void) {
	std::string str;
	int index = 0;
	str = "";
	while (str == "" || this->numContacts < index || index < 1) {
	std::cout << "Select an existent Index : ";
	if (std::getline(std::cin, str) && str != "") {
		index = atoi(str.c_str());
		if (this->numContacts < index || index < 1) {
			std::cout << "Non-existent Contact" << std::endl;
			usleep(1000000);
		}
		else {
			std::system("clear");
			std::cout << "Fist name : " << this->contacts[index - 1].getFirstName() << std::endl;
			std::cout << "Last name : " << this->contacts[index - 1].getLastName() << std::endl;
			std::cout << "Nick name : " << this->contacts[index - 1].getNickName() << std::endl;
			std::cout << "Phone Number : " << this->contacts[index - 1].getPhone() << std::endl;
			std::cout << "Darkest Secret : " << this->contacts[index - 1].getSecret() << std::endl;
			std:: cout << std::endl;
			usleep(1000000);
			return ;
		}
	}
	}
}
