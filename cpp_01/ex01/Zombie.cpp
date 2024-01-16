/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:09:33 by jede-ara          #+#    #+#             */
/*   Updated: 2024/01/16 18:29:37 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void ){
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
