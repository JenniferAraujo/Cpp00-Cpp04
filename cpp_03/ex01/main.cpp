#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap mya("Mya");
	ScavTrap charlie("Charlie");

	mya.beRepaired(5);
	charlie.takeDamage(10);
	mya.takeDamage(10);

	mya.attack("Charlie");
	charlie.guardGate();

	charlie.takeDamage(3);
	mya.beRepaired(4);
	mya.attack("Charlie");
	charlie.takeDamage(5);

	return (0);
}