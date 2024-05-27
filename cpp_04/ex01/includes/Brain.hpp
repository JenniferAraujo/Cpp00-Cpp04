#ifndef BRAIN_HPP
# define BRAIN_HPP

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
# define RED	"\e[1;31m"
# define RESET "\033[0m"

class Brain
{
	public:
		std::string	_ideas[100];

		//constructors
		Brain(); // simple constructor
		Brain(const Brain& copy); // copy constructor
		Brain& operator= (const Brain& copy); // Copy assignment constructor

		std::string getIdea(int index) const;
    	void setIdea(int index, const std::string& idea);
		
		//destructor
		~Brain();
};

#endif
