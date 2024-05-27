#include "./includes/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout<< YELLOW << "Cat default constructor called" << RESET <<std::endl;
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Meow 🐱" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor called" << RESET << std::endl;
}
