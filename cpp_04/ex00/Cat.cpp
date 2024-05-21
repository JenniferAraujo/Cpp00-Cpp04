#include "Cat.hpp"

Cat::Cat()
{
	std::cout<< "Cat default constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& copy)
{
	std::cout<< "Cat copy constructor called" << std::endl;
}

// Copy assignment operator overload
Cat& Cat::operator= (const Cat& copy)
{
	if (this == &copy)
		return *this;
	std::cout<< "Cat copy assignment operator overload" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout<< "Cat destructor called" << std::endl;
}
