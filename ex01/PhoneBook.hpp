/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:05 by jede-ara          #+#    #+#             */
/*   Updated: 2023/11/29 20:38:35 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <unistd.h>

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
