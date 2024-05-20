#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public: 
		FragTrap(); // Constructor simples: inicializa os objt
		FragTrap(std::string name); //inicializa os atributos da classe
		FragTrap(const FragTrap &copy); //copia constructor: permite criação de um novo objt a partir de outro objt da mesma classe
		FragTrap& operator= (const FragTrap &copy); //sobrecarga do operador de atribuicao de copia: permite a atribuição de um objt a outro objt da mesma classe
		
		void	highFivesGuys(void);

		~FragTrap(); //destructor 
};

#endif