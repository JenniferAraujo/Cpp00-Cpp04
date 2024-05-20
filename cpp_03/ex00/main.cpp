#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap mya("Mya");
	ClapTrap charlie("Charlie");
	ClapTrap guto("Guto");

	mya.beRepaired(5);
	charlie.takeDamage(10);
	mya.takeDamage(10);

	mya.attack("Charlie");
	for (int i = 0; i <= 5; i++)
		charlie.attack("Mya");

	guto.attack("Charlie");
	charlie.takeDamage(3);
	guto.beRepaired(4);
	guto.attack("Charlie");
	charlie.takeDamage(5);

	return (0);
}
