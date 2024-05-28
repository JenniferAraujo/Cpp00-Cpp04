#include "./includes/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout<< YELLOW << "Cat default constructor called" << RESET <<std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator= (const Cat& copy)
{
	if (this == &copy)
		return (*this);
	std::cout << YELLOW << "Cat copy assignment operator overload" << RESET << std::endl;
	_type = copy._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Meow 🐱" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor called" << RESET << std::endl;
}
