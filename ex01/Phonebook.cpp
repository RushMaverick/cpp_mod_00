/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/09 15:42:07 by rrask            ###   ########.fr       */
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
	std::cout << "Searching at the moment is pretty sus." << std::endl;
	return ;
}

PhoneBook::PhoneBook() {
	this->_contactCount = 0;
	return;
}

PhoneBook::~PhoneBook() {
	return;
}