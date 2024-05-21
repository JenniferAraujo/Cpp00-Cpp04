#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _health(10), _energy(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _energy(10), _attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _health(copy._health), _energy(copy._energy), _attackDamage(copy._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

std::string	ClapTrap::getName() const{
	return _name;
}

int	ClapTrap::getHealth() const{
	return _health;
}

int	ClapTrap::getEnergy() const{
	return _energy;
}

int	ClapTrap::getAttackDamage() const{
	return _attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_health > 0 && this->_energy > 0)
	{
		std::cout << this->_name << " ClapTrap attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << this->_name << " ClapTrap can't attack because is dead" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->_health > 0)
	{
		std::cout << this->_name << " ClapTrap is taking " << amount << " points of damage!" << std::endl;
		this->_health -= amount;
		if (this->_health < 0)
			this->_health = 0;
	}
	else
		std::cout << this->_name << " ClapTrap can't take damage because is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health > 0 && this->_energy > 0)
	{
		std::cout << this->_name << " ClapTrap repairs itself for " << amount << " hit points!" << std::endl;
		this->_health += amount;
		this->_energy -= 1;
	}
	else
		std::cout << " ClapTrap can't be repaired because is dead" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
