/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:12:10 by rrask             #+#    #+#             */
/*   Updated: 2023/10/17 10:12:11 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char** argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i] != NULL; i++){
			for (int j = 0; argv[i][j] != '\0'; j++){
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = std::toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
