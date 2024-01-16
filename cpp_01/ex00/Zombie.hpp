/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:58:51 by jenny             #+#    #+#             */
/*   Updated: 2024/01/16 17:50:45 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>
#include <unistd.h>

class Zombie{
	private:
		std::string	_name; //boa pratica variaveis privadas _
	public:
		Zombie(std::string name); // construtor
		~Zombie(void); // destrutor
		void	announce(void); // só para imprimir o nome+BraiiiiiiinnnzzzZ...
		void    setName(std::string name); //serve p/ definir o nome do Zombie
};

Zombie* newZombie(std::string name ); // cria um Zombie
void randomChump( std::string name ); // cria um zumbi, dá um nome e chama função announce

#endif
