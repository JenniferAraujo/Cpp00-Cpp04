# include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << GREEN << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << GREEN << "Type default constructor called" << RESET << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& copy): _type(copy._type)
{
	std::cout << GREEN << "WrongAnimal copy constructor called" << RESET << std::endl;
}

// Copy assignment operator overload
WrongAnimal& WrongAnimal::operator= (const WrongAnimal& copy)
{
	if (this == &copy)
		return (*this);
	std::cout << GREEN << "WrongAnimal copy assignment operator overload" << RESET << std::endl;
	_type = copy._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void    WrongAnimal::makeSound() const
{
	std::cout << GREEN << "Some wrong animal sound 🦆" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << GREEN << "WrongAnimal destructor called" << RESET << std::endl;
}
