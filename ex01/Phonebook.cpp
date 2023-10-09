/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/09 13:07:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

 void PhoneBook::addMethod() {
	// Contact *contact;
	Contact newContact;
	//Set contacts[_contactCount] details by user input.
	this->_contacts[_contactCount] = newContact;
	// int index = this->_contactCount;
	// Let Contact add to its array, setFunctions
	this->_contactCount++;
	return;
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