#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap mya("Mya");
	ScavTrap guto("Guto");
	FragTrap charlie("Charlie");

	mya.beRepaired(5);
	charlie.takeDamage(10);
	mya.takeDamage(10);

	mya.attack("Charlie");

	charlie.takeDamage(3);
	mya.beRepaired(4);
	guto.attack("Mya");
	mya.attack("Charlie");
	charlie.takeDamage(5);
	guto.takeDamage(10);

	charlie.highFivesGuys();
	
	return (0);
}