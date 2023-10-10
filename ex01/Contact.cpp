/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:12:56 by rrask             #+#    #+#             */
/*   Updated: 2023/10/10 14:04:20 by rrask            ###   ########.fr       */
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

std::string Contact::getLastName() const {
	return (this->_lastName);
}

std::string Contact::getNickName() const {
	return (this->_nickName);
}

std::string Contact::getPhoneNbr() const {
	return (this->_phoneNbr);
}

std::string Contact::getDarkSecret() const {
	return (this->_darkSecret);
}

void Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void Contact::setLastName(std::string name) {
	this->_lastName = name;
}

void Contact::setNickName(std::string name) {
	this->_nickName = name;
}

void Contact::setPhoneNbr(std::string nbr) {
	this->_phoneNbr = nbr;
}

void Contact::setDark(std::string secret) {
	this->_darkSecret = secret;
}
