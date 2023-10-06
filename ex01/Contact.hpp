#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNbr;
		std::string _darkSecret;

	public:
		Contact(std::string name);
		~Contact();
		void printDetails();
		void setFirstName(std::string name);
		std::string getFirstName() const;
};

#endif