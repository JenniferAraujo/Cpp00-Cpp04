/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:01:42 by jede-ara          #+#    #+#             */
/*   Updated: 2023/11/30 18:14:08 by jede-ara         ###   ########.fr       */
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

//int main(int ac, char **av){
int main(void){
		PhoneBook phonebook;
		phonebook.add();
		phonebook.add();
		phonebook.search();
		return 0;
}
