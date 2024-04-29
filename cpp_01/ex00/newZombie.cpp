#include "Zombie.hpp"

/* aloca dinamicamente memória para um novo zombie
com o nome fornecido e retorna um ponteiro para ele */
Zombie*  newZombie( std::string name )
{
	Zombie	*zmb = new Zombie(name);
	return (zmb);
}
