#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

// Copy assignment operator overload
Animal& Animal::operator= (const Animal& copy)
{
    if (this == &copy)
        return *this;
    std::cout << "Animal copy assignment operator overload" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
