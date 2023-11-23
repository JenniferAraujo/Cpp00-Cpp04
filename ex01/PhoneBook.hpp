/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:05 by jede-ara          #+#    #+#             */
/*   Updated: 2023/11/23 18:50:26 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>

//classe para os contatos
class   Contact{
    private: 
        std::string name; //variaveis
        std::string nickname;

    public: 
        Contact(void); //construtor, tem que ter o mesmo nome da classe!
        ~Contact(void); //destrutor, usado p limpeza.
};

//classe para o phone
class PhoneBook{
public:
    PhoneBook(void); //construtor
    ~PhoneBook(void); //destrutor
};

#endif
