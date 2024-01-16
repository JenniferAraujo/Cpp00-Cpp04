/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:18 by jenny             #+#    #+#             */
/*   Updated: 2024/01/16 18:04:00 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string name ): _name(name){
    std::cout << this->_name << "was born today" << std::endl;
    return ;
}

void    Zombie::setName( std::string name){
    this->_name = name;
    return ;
}

Zombie::~Zombie( void ){
    std::cout << this->_name << "finally died :D" << std::endl;
    return ;
}