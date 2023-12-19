/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:04 by jenny             #+#    #+#             */
/*   Updated: 2023/12/14 18:05:56 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*  newZombie( std::string name ){
	Zombie	*zmb = new Zombie; //new aloca memoria
	zmb->setName(name); // usa o metodo setName para definir o nome do Zombbie
	return (zmb); //retorna o ponteiro do zombie criado
}