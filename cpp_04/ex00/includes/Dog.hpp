#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(); // Constructor
		Dog(const Dog& copy);//Copy constructor
		Dog& operator= (const Dog& copy); //Copy assignment constructor
		void    makeSound() const;
		~Dog(); // Destructor
};

#endif
