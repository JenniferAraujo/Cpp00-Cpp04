#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(); // Constructor
		WrongCat(const WrongCat &copy); //copy constructor
		WrongCat& operator= (const WrongCat& copy);// copy assignment constructor
		void    makeSound() const;
		~WrongCat(); // Destructor
};


#endif
