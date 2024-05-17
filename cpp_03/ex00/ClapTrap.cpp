#include "Claptrap.h"

ClapTrap::ClapTrap()
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
		this->_name = copy._name;
		this->_health = copy._health;
		this->_energy = copy._energy;
		this->_attackDamage = copy._attackDamage;
	}
    return (*this);
}

//usar essa logica para fazer as funcoes a seguir, nenhuma funciona ainda!
void	ClapTrap::attack(const std::string& target)
{
    if (this->_health != 0)
    {
		std::cout << this->_name << " ClapTrap attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        target._health = -1;
        ClapTrap._energy = -1;
    }
	else
		std::cout << this->name << "ClapTrap can't attack because is dead" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->_health != 0)
	{
		std::cout << " ClapTrap esta recebendo danos" << std::endl;
		ClapTrap._health = -1
	}
	else
		std::cout << this->name << "ClapTrap can't take damage because is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_health != 0 || _energy != 0)
	{
		std::cout << " ClapTrap esta sendo reparado" << std::endl;
		ClapTrap._energy = -1;
	}
	else
		std::cout << "ClapTrap can't attack because is dead" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}