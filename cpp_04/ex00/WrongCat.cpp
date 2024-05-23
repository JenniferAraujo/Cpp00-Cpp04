#include "./includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongWrongCat";
	std::cout<< YELLOW << "WrongCat default constructor called" << RESET <<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "WrongCat destructor called" << RESET << std::endl;
}