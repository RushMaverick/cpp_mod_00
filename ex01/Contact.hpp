/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:23:13 by rrask             #+#    #+#             */
/*   Updated: 2023/10/18 10:23:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNbr;
		std::string _darkSecret;

	public:
		Contact();
		~Contact();
		void setFirstName(std::string name);
		void setLastName(std::string name);
		void setNickName(std::string name);
		void setPhoneNbr(std::string nbr);
		void setDark(std::string secret);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNbr() const;
		std::string getDarkSecret() const;
};

#endif