/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:56:26 by rrask             #+#    #+#             */
/*   Updated: 2023/10/06 11:32:28 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main (void)
{
	Contact newContact("Greg");
	std::string a;
	while (42)
	{
		std::cout << "Should I terminate?" << std::endl;
		std::getline(std::cin, a);
		if (std::cin.eof()){
			std::cout << "Well duck you too." << std::endl;
			break; 
		}
		if (a.compare("Exit") == 0) {
			std::cout << "kthxbye" << std::endl;
			break;
		}
		if (a.compare("Add") == 0) {
			std::cout << "Well I didn't want your opinion anyway." << std::endl;
		}
		break;
	}
	return 0;
}