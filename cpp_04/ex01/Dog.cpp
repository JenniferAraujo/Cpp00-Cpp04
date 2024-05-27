#include "./includes/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
    std::cout << MAGENTA << "Dog default constructor called" <<  RESET << std::endl;
}
void	Dog::makeSound() const
{
	std::cout << MAGENTA << "Roff Roff 🐶" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << MAGENTA << "Dog destructor called" << RESET << std::endl;
}
