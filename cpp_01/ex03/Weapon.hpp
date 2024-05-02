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
			Weapon(std::string	weaponType); /*especificar o tipo da arma*/
			~Weapon();
			const std::string&	getType(); /*obter o tipo da arma*/
			void	setType(std::string	newType); /*define o tipo da arma*/
};

#endif
