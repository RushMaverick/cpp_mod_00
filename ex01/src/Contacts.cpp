/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:12:56 by rrask             #+#    #+#             */
/*   Updated: 2023/10/05 12:15:29 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../inc/Contacts.hpp>
#include <../inc/Phonebook.hpp>

Contacts::Contacts(std::string name) : _firstName(name) {
	std::cout << "Constructor called." << std::endl;
	return;
}

Contacts::~Contacts() {
	std::cout << "Destructor called." << std::endl;
	return;
}

std::string Contacts::getFirstName() const {
	return (this->_firstName);
}

void Contacts::setFirstName(std::string name) {
	this->_firstName = name;
	return;
}