/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:29:30 by jede-ara          #+#    #+#             */
/*   Updated: 2024/01/16 18:37:29 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *zm = new Zombie[N];
    for(int i = 0; i < N; i++){
        zm[i].setName(name);
    }
    return(zm);
}