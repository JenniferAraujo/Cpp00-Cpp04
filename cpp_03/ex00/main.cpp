#include "ClapTrap.hpp"

// Overloaded insertion operator <<
std::ostream& operator<< (std::ostream& out, const ClapTrap &copy)
{
	out << "\033[31mName: \033[0m" << copy.getName() << "\033[31m, \033[0m" << "\033[31mhealth: \033[0m" << copy.getHealth()
	<< ", " << "\033[31menergy: \033[0m" << copy.getEnergy() << "\033[31m, " << "\033[31mattack damage: \033[0m" 
	<< copy.getAttackDamage() << std::endl;
	return (out);
}

int main(void)
{
	std::cout << "** CLAPTRAP **" << std::endl << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap guto;
		ClapTrap bob("Bob");

		std::cout << "\n\033[34mInitial Points\033[0m" << std::endl; 
		std::cout << guto;
		std::cout << bob;

		std::cout << "\n\033[34mTests\033[0m" << std::endl; 
		guto.attack("Bob");
		std::cout << guto << std::endl;
		guto.takeDamage(5);
		std::cout << guto;
		std::cout << bob << std::endl;
		guto.beRepaired(5);
		std::cout << guto;
		std::cout << bob << std::endl;
		guto.attack("Bob");
		std::cout << guto;
		std::cout << bob << std::endl;
		bob.beRepaired(3);
		std::cout << guto;
		std::cout << bob << std::endl;
		bob.attack("Guto");
		std::cout << guto;
		std::cout << bob << std::endl;
		guto.beRepaired(3);
		std::cout << "\n\033[34mFinal Points\033[0m" << std::endl;
		std::cout << guto;
		std::cout << bob;
		std::cout << "\n\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}
