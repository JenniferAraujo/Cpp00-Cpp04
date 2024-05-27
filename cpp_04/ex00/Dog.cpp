#include "./includes/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
    std::cout << MAGENTA << "Dog default constructor called" <<  RESET << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
    std::cout << YELLOW << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator= (const Dog& copy)
{
    if (this == &copy)
        return (*this);
    std::cout << YELLOW << "Dog copy assignment operator overload" << RESET << std::endl;
    _type = copy._type;
    return (*this);
}

void	Dog::makeSound() const
{
	std::cout << MAGENTA << "Roff Roff 🐶" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << MAGENTA << "Dog destructor called" << RESET << std::endl;
}
