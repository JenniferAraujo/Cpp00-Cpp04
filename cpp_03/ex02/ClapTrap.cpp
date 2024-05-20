#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << CYAN << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _energy(10), _attackDamage(0)
{
	std::cout << CYAN << "Name constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _health(copy._health), _energy(copy._energy), _attackDamage(copy._attackDamage)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &copy)
{
	std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_health = copy._health;
		this->_energy = copy._energy;
		this->_attackDamage = copy._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_health > 0 && this->_energy > 0)
	{
		std::cout << CYAN << this->_name << " ClapTrap attacks " << target << " causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << CYAN << this->_name << " ClapTrap can't attack because is dead" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->_health > 0)
	{
		std::cout << CYAN << this->_name << " ClapTrap is taking " << amount << " points of damage!" << RESET << std::endl;
		this->_health -= amount;
		if (this->_health < 0)
			this->_health = 0;
	}
	else
		std::cout << CYAN << this->_name << " ClapTrap can't take damage because is dead" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health > 0 && this->_energy > 0)
	{
		std::cout << CYAN << this->_name << " ClapTrap repairs itself for " << amount << " hit points!" << RESET << std::endl;
		this->_energy += amount;
		this->_energy -= 1;
	}
	else
		std::cout << CYAN <<  "ClapTrap can't attack because is dead" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << CYAN << "Destructor called" << RESET << std::endl;
}
