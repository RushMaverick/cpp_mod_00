#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

#include "Contact.hpp"

class PhoneBook {
	private:
		std::string _name;

	public:
		void searchMethod();
		void addMethod();
		void exitMethod();
		PhoneBook(std::string name);
		~PhoneBook();
};

#endif