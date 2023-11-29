/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:59:45 by jenny             #+#    #+#             */
/*   Updated: 2023/11/29 21:10:21 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//usando o construtor inicializar os membros da classe, no caso sao os dados input
Contact::Contact(void) {
	return;
}
Contact::Contact( std::string fn, std::string ln, std::string nk, std::string nb, std::string ds): first_name(fn), last_name(ln), nickname(nk), secret(ds), number(nb){
	return ;
}
