/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:59:30 by jenny             #+#    #+#             */
/*   Updated: 2023/11/30 18:01:03 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add(void){
	std::string first, last, nick, num, ds;

	std::system("clear"); //limpa a tela 
	std::cout << "*-----*-----*-----*-----*-----*\n";
	std::cout << "*         ADD  CONTACT        *\n";
	std::cout << "*-----*-----*-----*-----*-----*\n\n";
	std::cout << "First Name: ";
	std::getline(std::cin, first);
	std::cout << "Last Name: ";
	std::getline(std::cin, last);
	std::cout << "Nickname: ";
	std::getline(std::cin, nick);
	std::cout << "Number: ";
	std::getline(std::cin, num);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, ds);
	 
	 if (first.empty() || last.empty() || nick.empty() || num.empty() || ds.empty()){
		std::system("clear");
		std::cout << std::endl << "ERROR: EMPTY PARAMETER! " << std::endl;
		std::system("clear");
		return ;
	 }
	 if (validation_digits(num)){
		std::cout << std::endl << "ERROR: INVALID NUMBER! " << std::endl;
		return ;
	 }
	 this->contact[i++ % 8] = Contact(first, last, nick, num, ds);
	 std::system("clear");
	 std::cout << "*-----*-----* CONTACT ADDED TO PHONEBOOK *-----*-----*\n";
}

void    PhoneBook::search(void){
	//int index;
	
	std::system("clear");
	std::cout << "*-----*-----*-----*-----*-----*\n";
	std::cout << "*           SEARCH            *\n";
	std::cout << "*-----*-----*-----*-----*-----*\n\n";
	std::cout << "\t|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "\t|" <<  std::setw(10) << i + 1 << "|" << std::setw(10) << this->contact[i].get_fields(1) << "|" << std::setw(10) << this->contact[i].get_fields(2) << "|" << std::setw(10) << this->contact[i].get_fields(3) << "|" << std::endl;
	}
}
