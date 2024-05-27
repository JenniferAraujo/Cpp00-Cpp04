#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(); // Constructor
		Cat (const Cat &copy); //copu constructor
		Cat& operator= (const Cat& copy);// copy assignment constructor
		void    makeSound() const;
		~Cat(); // Destructor
};

#endif

