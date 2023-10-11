/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/11 13:12:29 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string PhoneBook::_readInput(std::string prompt) const {
	std::string line;

	std::cout << prompt;
	std::getline(std::cin, line);
	return (line);
}

Contact *PhoneBook::getContact(int index) {
	return (&this->_contacts[index % MAX_CONTACTS]);
}

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

void PhoneBook::searchMethod() {
	int index;
	Contact *contact;

	std::cout << std::endl;
	this->printTable();
	std::cout << "Enter a number: ";
	std::cin >> index;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (index >= 1 && index <= 8){
		index -= 1;
		contact = this->getContact(index);
		if (contact != NULL && contact->getFirstName().compare("") != 0) {
			std::cout << std::setfill('A');
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

void PhoneBook::printTable() {

	this->printBorder();
	this->printHeader();
	for (int i = 0; i < _contactCount; i++) {
		this->printData(i + 1, _contacts[i].getFirstName(), _contacts[i].getLastName(), _contacts[i].getNickName());
		this->printSeparator();
	}
	this->printBorder();
}

void PhoneBook::printBorder() {
	std::cout << '+'
	<< std::setw(15)
	<< std::setfill('-')
	<< '+' << std::setw(15)
	<< '+' << std::setw(15)
	<< '+' << std::endl;
}

void PhoneBook::printHeader() {
	std::string header1 = "Index";
    std::string header2 = "Name";
    std::string header3 = "LastName";
    std::string header4 = "NickName";

	std::cout << '|'
	<< std::setw(3) << std::right
	<< header1 << '|' <<
	std::setw(8) << header2
	<< '|' << std::setw(14)
	<< header3 << '|' << std::setw(14)
	<< header4 << '|' << std::endl;
}

void PhoneBook::printSeparator() {
	std::cout << '+'
	<< std::setw(15) << std::setfill('-')
	<< '-' << std::setw(15)
	<< '-' << std::setw(15)
	<< '+' << std::endl;
}

void PhoneBook::printData(int index, std::string name, std::string lastName, std::string nick) const {
	std::cout << '|' << std::setw(5) << std::right << index << '|'
	<< std::setw(8) << std::right << name
	<< '|' << std::setw(14) << lastName << '|'
	<< std::setw(14) << nick
	<< '|' << std::endl;
}

PhoneBook::PhoneBook() {
	this->_contactCount = 0;
	return;
}

PhoneBook::~PhoneBook() {
	return;
}