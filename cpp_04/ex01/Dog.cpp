#include "./includes/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
    this->_brain = new Brain();
    std::cout << MAGENTA << "Dog default constructor called" <<  RESET << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy)
{
    std::cout << YELLOW << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator= (const Dog& copy)
{
    if(this == &copy)
        return *this;
    _type = copy._type;
    if(_brain)
        delete _brain;
    _brain = new Brain(*copy._brain); //deep copy
    std::cout << YELLOW << "Dog copy assignment operator overload" << RESET << std::endl;
    return (*this);
}

void	Dog::makeSound() const
{
	std::cout << MAGENTA << "Roff Roff 🐶" << RESET << std::endl;
}

Brain* Dog::getBrain() const {
    return _brain;
}

Dog::~Dog()
{
    std::cout << MAGENTA << "Dog destructor called" << RESET << std::endl;
    delete this->_brain;
}
