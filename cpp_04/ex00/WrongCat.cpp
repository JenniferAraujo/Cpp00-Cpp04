#include "./includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout<< YELLOW << "WrongCat default constructor called" << RESET <<std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy)
{
    std::cout << YELLOW << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& copy)
{
    if (this == &copy)
        return (*this);
    std::cout << YELLOW << "WrongCat copy assignment operator overload" << RESET << std::endl;
    _type = copy._type;
    return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << YELLOW << "Meow 🐱" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "WrongCat destructor called" << RESET << std::endl;
}
