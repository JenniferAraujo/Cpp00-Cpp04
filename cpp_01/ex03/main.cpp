#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/* Ainda sobre referências, é criado dois tipos de humanos em duas classes que podem atacar uns aos outros com armas diferentes.
Referências são frequentemente usadas quando se quer garantir que o objeto referenciado sempre existe.
Enquanto ponteiros oferecem mais flexibilidade em algumas situações
*/

int	main(void){
	{
		Weapon club = Weapon("crude spiked club");
		HumanA jennifer("Jennifer", club);
		jennifer.attack();
		club.setType("some other type of club");
		jennifer.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jessica("Jessica");
		jessica.attack();
		club.setType("some other type of club");
		jessica.attack();
	}
}
