/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/10 14:11:03 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

 void PhoneBook::addMethod() {
	Contact *contact;
	int index = this->_contactCount;
	contact = this->getContact(index);

	std::cout << std::endl;
	contact->setFirstName(this->_readInput("Enter first name: "));
	contact->setLastName(this->_readInput("Enter last name: "));
	contact->setNickName(this->_readInput("Enter nickname: "));
	contact->setPhoneNbr(this->_readInput("Enter phone number: "));
	contact->setDark(this->_readInput("Enter a dark, dark secret: "));
	this->_contactCount++;
	std::cout << std::endl;
	return;
}

std::string PhoneBook::_readInput(std::string prompt) const {
	std::string line;

	std::cout << prompt;
	std::getline(std::cin, line);
	return (line);
}

Contact *PhoneBook::getContact(int index) {
	return (&this->_contacts[index % MAX_CONTACTS]);
}

void PhoneBook::searchMethod() {
	int index;
	Contact *contact;

	std::cout << std::endl;
	std::cout << "Enter a number: ";
	std::cin >> index;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//Display all names in a table.

	if (index >= 1 && index <= 8){
		index -= 1;
		contact = this->getContact(index);
		if (contact != NULL && contact->getFirstName().compare("") != 0) {
			// How can I check the array? What state is an unset index of the contacts array?
			// Display all the information about the contact.
		}
		else
			std::cout << "That's empty, doofus." << std::endl;
	}
	else
		std::cout << "That is an invalid index." << std::endl;
	std::cout << std::endl;
	return;
}

PhoneBook::PhoneBook() {
	this->_contactCount = 0;
	return;
}

PhoneBook::~PhoneBook() {
	return;
}