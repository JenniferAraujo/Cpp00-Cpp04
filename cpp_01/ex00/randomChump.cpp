/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:35:13 by jenny             #+#    #+#             */
/*   Updated: 2023/12/14 18:09:35 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie	*zmb = newZombie(name); //usa a funcao newZombie p criar um zombie
	zmb->announce(); //chama o metodo announce p zombie se anunciar 
	delete zmb; //free - limpa a memoria usada depois
}