#include "./includes/Brain.hpp"

Brain::Brain()
{
	std::cout << CYAN << "Brain default constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "Hello, I'm initializing my entire array to ensure there are no failures :)";
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << RED << "Brain copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator= (const Brain& copy)
{
	if (this == &copy)
		return (*this);
	std::cout << RED << "Brain copy assignment operator overload" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return _ideas[index];
	return ("");
}

void Brain::setIdea(int index, const std::string& idea) 
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

Brain::~Brain()
{
	std::cout << RED << "Brain destructor called" << RESET << std::endl;
}


