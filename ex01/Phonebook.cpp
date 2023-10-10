/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/10 12:32:44 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

 void PhoneBook::addMethod() {
	Contact *contact;
	int index = this->_contactCount;
	contact = this->getContact(index);

	contact->setFirstName(this->_readInput("Enter first name: "));
	// for (int i = 0; i < MAX_CONTACTS; i++)
	// 	std::cout << this->_contacts[i].getFirstName() << std::endl;
	this->_contactCount++;
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
	std::cout << "Enter a number: ";
	std::cin >> index;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (index >= 1 && index <= 8)
		std::cout << "Yeah, that is there." << std::endl;
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