/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:56:26 by rrask             #+#    #+#             */
/*   Updated: 2023/10/10 12:33:12 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main (void)
{
	PhoneBook newPhonebook;
	std::string a;
	while (42)
	{
		std::cout << "Input a command: Add, Search or Exit" << std::endl;
		std::getline(std::cin, a);
		if (std::cin.eof()){
			std::cout << std::flush;
			std::cout << "Well duck you too." << std::endl;
			break; 
		}
		else if (a.compare("Exit") == 0) {
			break;
		}
		else if (a.compare("Add") == 0) {
			newPhonebook.addMethod();
		}
		else if (a.compare("Search") == 0) {
			newPhonebook.searchMethod();
		}
	}
	return 0;
}