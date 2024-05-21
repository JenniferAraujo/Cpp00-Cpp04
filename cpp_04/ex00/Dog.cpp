#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& copy)
{
    std::cout << " copy constructor called" << std::endl;
}

// Copy assignment operator overload
Dog& Dog::operator= (const Dog& copy)
{
    if (this == &copy)
        return (*this);
    std::cout << " copy assignment operator overload" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << " destructor called" << std::endl;
}
