#include "./includes/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
    this->_brain = new Brain(); //deep copy
	std::cout<< YELLOW << "Cat default constructor called" << RESET <<std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
    _brain = new Brain(*copy._brain); //deep copy
    std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator= (const Cat& copy)
{
    if(this == &copy)
        return *this;
    _type = copy._type;
    if(_brain)
        delete _brain;
    _brain = new Brain(*copy._brain); //deep copy
    std::cout << YELLOW << "Cat copy assignment operator overload" << RESET << std::endl;
    return (*this);
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "Meow 🐱" << RESET << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}

Cat::~Cat()
{
	std::cout << YELLOW << "Cat destructor called" << RESET << std::endl;
    delete this->_brain;
}