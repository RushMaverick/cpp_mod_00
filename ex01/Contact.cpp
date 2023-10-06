/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:12:56 by rrask             #+#    #+#             */
/*   Updated: 2023/10/06 11:20:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string name) : _firstName(name) {
	return;
}

Contact::~Contact() {
	return;
}

void	Contact::printDetails() {
	
}

std::string Contact::getFirstName() const {
	return (this->_firstName);
}

void Contact::setFirstName(std::string name) {
	this->_firstName = name;
	return;
}
