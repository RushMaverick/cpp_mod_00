/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:12:56 by rrask             #+#    #+#             */
/*   Updated: 2023/10/09 12:41:10 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

std::string Contact::getFirstName() const {
	return (this->_firstName);
}

// std::string Contact::getLastName() const {
// 	return (this->_lastName);
// }

// std::string Contact::getNickName() const {
// 	return (this->_nickName);
// }

// std::string Contact::getPhoneNbr() const {
// 	return (this->_phoneNbr);
// }

// std::string Contact::getDarkSecret() const {
// 	return (this->_darkSecret);
// }

void Contact::setFirstName(std::string name) {
	this->_firstName = name;
	return;
}
