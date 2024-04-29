#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>
#include <unistd.h>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void   	setName( std::string name);
};

Zombie*	zombieHorde( int N, std::string name ); /**/

#endif
