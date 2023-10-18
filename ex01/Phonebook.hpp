/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:23:30 by rrask             #+#    #+#             */
/*   Updated: 2023/10/18 10:23:31 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
		std::string _name;
		Contact _contacts[MAX_CONTACTS];
		Contact *getContact(int index);
		int _contactCount;
		std::string _readInput(std::string prompt) const;

	public:
		void searchMethod();
		void addMethod();
		void printTable();
		void printBorder();
		void printHeader();
		void printSeparator();
		void printData(int index, std::string name, std::string lastName, std::string nick) const;
		std::string truncate(std::string line, int width) const;
		PhoneBook();
		~PhoneBook();
};

#endif