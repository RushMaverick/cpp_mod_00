/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:03 by rrask             #+#    #+#             */
/*   Updated: 2023/10/06 15:31:35 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

void PhoneBook::addMethod() {
	std::cout << "Add what?" << std::endl;
	return;
}

void PhoneBook::searchMethod() {
	std::cout << "Searching at the moment is pretty sus." << std::endl;
	return ;
}

PhoneBook::PhoneBook(std::string name) : _name(name){
	return;
}

PhoneBook::~PhoneBook() {
	return;
}