#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog(); // Constructor
		Dog(const Dog& copy);//Copy constructor
		Dog& operator= (const Dog& copy); //Copy assignment constructor
		void    makeSound() const;
		Brain* getBrain() const; 
		~Dog(); // Destructor
};

#endif
