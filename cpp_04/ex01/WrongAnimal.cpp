# include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << CYAN << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << CYAN << "Type default constructor called" << RESET << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& copy): _type(copy._type)
{
    std::cout << CYAN << "WrongAnimal copy constructor called" << RESET << std::endl;
}

// Copy assignment operator overload
WrongAnimal& WrongAnimal::operator= (const WrongAnimal& copy)
{
    if (this == &copy)
        return (*this);
    std::cout << CYAN << "WrongAnimal copy assignment operator overload" << RESET << std::endl;
    _type = copy._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void    WrongAnimal::makeSound() const
{
	std::cout << CYAN << "Some wrong animal sound 🦆" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "WrongAnimal destructor called" << RESET << std::endl;
}
