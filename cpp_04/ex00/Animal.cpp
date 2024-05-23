# include "./includes/Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << CYAN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << CYAN << "Type default constructor called" << RESET << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& copy): _type(copy._type)
{
    std::cout << CYAN << "Animal copy constructor called" << RESET << std::endl;
}

// Copy assignment operator overload
Animal& Animal::operator= (const Animal& copy)
{
    if (this == &copy)
        return (*this);
    std::cout << CYAN << "Animal copy assignment operator overload" << RESET << std::endl;
    _type = copy._type;
    return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void    Animal::makeSound() const
{
	std::cout << CYAN << "Some animal sound" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << CYAN << "Animal destructor called" << RESET << std::endl;
}
