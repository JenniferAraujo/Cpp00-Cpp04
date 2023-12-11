/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:01:42 by jede-ara          #+#    #+#             */
/*   Updated: 2023/12/11 17:38:43 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool validation_digits(std::string number){
	unsigned int i = 0;

	if (number[0] == '+')
		i++;
	while (i < number.length()){
		if (!(isdigit(number[i])))
			return true;
		i++;
	}
	return false;
}

int main(void){
	PhoneBook phonebook;
	std::string str;
	while(1){
		std::cout << "Hello, choose an option: \n1 - Add \n2 - Search\n3 - Exit\n";
		std::cin.clear();
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.compare("1") == 0)
			phonebook.add();
		else if (!str.compare("2"))
			phonebook.search();
		else if (!str.compare("3"))
			return 0;
		else{
			std::cout << "ERROR: Invalid option!\n Try again :)" << std::endl;
		}
	}
	return 0;
}
