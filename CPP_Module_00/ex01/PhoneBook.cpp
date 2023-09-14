/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:15:07 by jokin             #+#    #+#             */
/*   Updated: 2023/09/14 10:53:41 by jaizpuru         ###   ########.fr       */
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
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << truncFirstName << "|" << std::setw(10) << truncLastName << "|" << std::setw(10) << truncNickName << std::endl;
		i++;
	}
}
