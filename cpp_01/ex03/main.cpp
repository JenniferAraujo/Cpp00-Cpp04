#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/* Ainda sobre referências, é criado dois tipos de humanos em duas classes que podem atacar uns aos outros com armas diferentes.
Referências são frequentemente usadas quando se quer garantir que o objeto referenciado sempre existe.
Enquanto ponteiros oferecem mais flexibilidade em algumas situações
*/

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
