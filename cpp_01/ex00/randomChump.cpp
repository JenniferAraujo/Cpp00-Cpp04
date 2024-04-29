#include "Zombie.hpp"

/*Cria um zombie localmente com o nome fornecido e o faz anunciar sua presença*/
void randomChump( std::string name )
{
	Zombie	zmb(name);
	zmb.announce();
}
