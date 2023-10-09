#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

#include "Contact.hpp"

class PhoneBook {
	private:
		std::string _name;
		Contact _contacts[MAX_CONTACTS];
		Contact *getContact(int index); 
		int _contactCount;

	public:
		void searchMethod();
		void addMethod();
		void exitMethod();
		PhoneBook();
		~PhoneBook();
};

#endif