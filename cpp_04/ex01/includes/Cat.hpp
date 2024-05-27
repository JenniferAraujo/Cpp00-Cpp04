#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat(); // Constructor
		Cat (const Cat &copy); //copu constructor
		Cat& operator= (const Cat& copy);// copy assignment constructor
		void    makeSound() const;
		Brain* getBrain() const;
		~Cat(); // Destructor
};

#endif


