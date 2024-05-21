#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	_health = 100;
	_energy = 100;
	_attackDamage = 30;
	std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_health = 100;
	_energy = 100;
	_attackDamage = 30;
	std::cout << YELLOW << "FragTrap name constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << YELLOW << "Copy FragTrap constructor called" << RESET << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &copy)
{
	std::cout << YELLOW << "FragTrap copy assignment operator called" << RESET << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << YELLOW << "FragTrap " << this->_name << ": You want a high five?" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap destructor called" << RESET << std::endl;
}