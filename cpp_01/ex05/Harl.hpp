#ifndef HARL_H
#define HARL_H

# include <iostream>
# include <string>
# include <cctype>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <iomanip> 
# include <cstdlib>
# include <ctime>

class	Harl{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};

#endif