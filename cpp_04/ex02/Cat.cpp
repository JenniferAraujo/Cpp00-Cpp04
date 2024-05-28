#include "./includes/Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	this->_brain = new Brain(); //deep copy
	std::cout<< YELLOW << "Cat default constructor called" << RESET <<std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy)
{
	if (copy._brain)
		_brain = new Brain(*copy._brain); //deep copy
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator= (const Cat& copy)
{
	if (this == &copy)
		return (*this);
	std::cout << YELLOW << "Cat copy assignment operator overload" << RESET << std::endl;
	Animal::operator=(copy);
	delete _brain;
	if (copy._brain)
		_brain = new Brain(*copy._brain); // deep copy
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