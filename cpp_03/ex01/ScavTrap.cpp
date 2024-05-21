#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	_health = 100;
	_energy = 50;
	_attackDamage = 20;
	std::cout << MAGENTA << "Default ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_health = 100;
	_energy = 50;
	_attackDamage = 20;
	std::cout << MAGENTA << "Name ScavTrap constructor called" << RESET << std::endl;
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

void	ScavTrap::attack(const std::string& target)
{
	if (this->_health > 0 && this->_energy > 0)
	{
		std::cout << MAGENTA << this->_name << " ScavTrap attacks " << target << " causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << MAGENTA << this->_name << " ScavTrap can't attack because is dead" << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout <<  MAGENTA << this->_name << " ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << MAGENTA << "ScavTrap destructor called" << RESET << std::endl;
}