/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:05 by jede-ara          #+#    #+#             */
/*   Updated: 2023/11/27 17:06:22 by jede-ara         ###   ########.fr       */
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
        ~Contact(void); //destrutor, usado p/ limpeza de memoria
};

//classe para o phone
class PhoneBook{
    private:
        Contact contac[8];
public:
    PhoneBook(void); //construtor
    ~PhoneBook(void); //destrutor
    void    add(void); //funcao p add contato
    void    search(void); //funcao p procurar contato
};

#endif