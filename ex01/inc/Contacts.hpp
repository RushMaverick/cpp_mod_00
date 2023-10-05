#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#define MAX_CONTACTS 8

#include <iostream>
#include <string>

class Contacts {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNbr;
		std::string _darkSecret;
		int _index;

	public:
		Contacts(std::string name);
		~Contacts();
		void setFirstName(std::string name);
		std::string getFirstName() const;
};

#endif