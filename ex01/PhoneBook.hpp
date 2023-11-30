/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:05 by jede-ara          #+#    #+#             */
/*   Updated: 2023/11/30 17:18:31 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>
#include <unistd.h>
#include "Contact.hpp"

//classe para o phone
class PhoneBook{
    private:
		int	i;
        Contact contact[8];
public:
   //PhoneBook(void); //construtor
    //~PhoneBook(void); //destrutor
    void    add(void); //funcao p add contato
    void    search(void); //funcao p procurar contato
};

#endif
