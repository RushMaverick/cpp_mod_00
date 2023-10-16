/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/16 10:48:26 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string PhoneBook::_readInput(std::string prompt) const {
	std::string line;

	while (!std::cin.eof())
	{
		std::cout << prompt;
		if (std::getline(std::cin, line) && line != "")
			break;
	}
	return (line);
}

Contact *PhoneBook::getContact(int index) {
	return (&this->_contacts[index % MAX_CONTACTS]);
}

 void PhoneBook::addMethod() {
	Contact *contact;
	int index = this->_contactCount;
	contact = this->getContact(index);

	// When index is over 8, warn about overwrite
	if (index >= MAX_CONTACTS) {
		std::cout << "Warning: You are about to overwrite "
		<< contact->getFirstName() 
		<< std::endl;
	}
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
	if(std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "That is an invalid index." << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (index >= 1 && index <= 8){
		std::cout << "Is this on" << std::endl;
		index -= 1;
		contact = this->getContact(index);
		if (contact != NULL && contact->getFirstName().compare("") != 0) {
			std::cout << std::endl;
			std::cout << "First Name: " << contact->getFirstName() << std::endl;
			std::cout << "Last Name: " << contact->getLastName() << std::endl;
			std::cout << "Nickname: " << contact->getNickName() << std::endl;
			std::cout << "Phone Number: " << contact->getPhoneNbr() << std::endl;
			std::cout << "Dark Secret: " << contact->getDarkSecret() << std::endl;
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
		this->printData(i + 1, this->truncate(_contacts[i].getFirstName(), 10), 
			this->truncate(_contacts[i].getLastName(), 10),
			this->truncate(_contacts[i].getNickName(), 10));
		this->printSeparator();
	}
	this->printBorder();
	std::cout << std::endl;
}

void PhoneBook::printBorder() {
	std::cout << '+'
	<< std::setw(15)
	<< std::setfill('-')
	<< '+' << std::setw(14)
	<< '+' << std::setw(15)
	<< '+' << std::endl;
}

void PhoneBook::printHeader() {
	std::string header1 = "Index";
    std::string header2 = "Name";
    std::string header3 = "LastName";
    std::string header4 = "NickName";

	std::cout << '|'
	<< std::setw(10) << std::right
	<< header1 << '|' <<
	std::setw(10) << header2
	<< '|' << std::setw(10)
	<< header3 << '|' << std::setw(10)
	<< header4 << '|' << std::endl;
}

void PhoneBook::printSeparator() {
	std::cout << '+'
	<< std::setw(15) << std::setfill('-')
	<< '-' << std::setw(14)
	<< '-' << std::setw(15)
	<< '+' << std::endl;
}

void PhoneBook::printData(int index, std::string name, std::string lastName, std::string nick) const {
	std::cout << '|' << std::setw(10) << std::right << index << '|'
	<< std::setw(10) << std::right << name
	<< '|' << std::setw(10) << lastName << '|'
	<< std::setw(10) << nick
	<< '|' << std::endl;
}

std::string PhoneBook::truncate(std::string line, int width) const {
	if ((int)line.length() >= width)
		return (line.substr(0, 9) + '.');
	else
		return (line);
}

PhoneBook::PhoneBook() {
	this->_contactCount = 0;
	return;
}

PhoneBook::~PhoneBook() {
	return;
}