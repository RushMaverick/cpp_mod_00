/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:56:26 by rrask             #+#    #+#             */
/*   Updated: 2023/10/06 15:31:29 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main (void)
{
	Contact newContact("Greg");
	PhoneBook newPhonebook("Johannes");
	std::string a;
	while (42)
	{
		std::cout << "Should I terminate?" << std::endl;
		std::getline(std::cin, a);
		if (std::cin.eof()){
			std::cout << std::flush;
			std::cout << "Well duck you too." << std::endl;
			break; 
		}
		if (a.compare("Exit") == 0) {
			std::cout << "kthxbye" << std::endl;
			break;
		}
		if (a.compare("Add") == 0) {
			std::cout << std::flush;
			newPhonebook.addMethod();
		}
		if (a.compare("Search") == 0) {
			std::cout << std::flush;
			newPhonebook.searchMethod();
		}
	}
	return 0;
}