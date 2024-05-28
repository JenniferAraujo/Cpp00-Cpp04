#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <iomanip> 
# include <cstdlib>
# include <ctime>

# define CYAN    "\e[0;36m"
# define MAGENTA "\033[0;35m"
# define YELLOW  "\e[0;33m"
# define GREEN	"\e[0;32m"
# define ORANGE	"\e[38;5;208m"
# define RESET "\033[0m"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal (const Animal &copy);
		virtual Animal& operator= (const Animal& copy);

		virtual std::string getType() const;
		virtual void makeSound() const;
		
		//Destructor
		virtual ~Animal();
};

#endif