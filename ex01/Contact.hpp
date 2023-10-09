#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string _firstName;
		// std::string _lastName;
		// std::string _nickName;
		// std::string _phoneNbr;
		// std::string _darkSecret;

	public:
		Contact();
		~Contact();
		void setFirstName(std::string name);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNbr() const;
		std::string getDarkSecret() const;
};

#endif