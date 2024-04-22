/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:26:42 by jenny             #+#    #+#             */
/*   Updated: 2024/01/24 17:31:29 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <iomanip> 
# include <cstdlib>
# include <ctime>

class Weapon{
	private: 
			std::string	_type;
	public: 
			Weapon();
			Weapon(std::string	weaponType);
			~Weapon();
			std::string	getType() const;
			void	setType(std::string	newType);
};

#endif
