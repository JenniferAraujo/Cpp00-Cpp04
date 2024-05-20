#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << MAGENTA << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_health = 100;
	_energy = 50;
	_attackDamage = 20;
	std::cout << MAGENTA << "ScavTrap name constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << MAGENTA << "Copy ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &copy)
{
	std::cout << MAGENTA << "ScavTrap copy assignment operator called" << RESET << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout <<  MAGENTA << this->_name << "ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << MAGENTA << "ScavTrap destructor called" << RESET << std::endl;
}