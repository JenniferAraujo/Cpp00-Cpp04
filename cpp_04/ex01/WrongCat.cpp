#include "./includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout<< ORANGE << "WrongCat default constructor called" << RESET <<std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
	std::cout << ORANGE << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& copy)
{
	if (this == &copy)
		return (*this);
	std::cout << ORANGE << "WrongCat copy assignment operator overload" << RESET << std::endl;
	_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << ORANGE << "Meow 🐱" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << ORANGE << "WrongCat destructor called" << RESET << std::endl;
}
