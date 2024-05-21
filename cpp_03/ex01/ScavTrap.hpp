#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public: 
		ScavTrap(); // Constructor simples: inicializa os objt
		ScavTrap(std::string name); //inicializa os atributos da classe
		ScavTrap(const ScavTrap &copy); //copia constructor: permite criação de um novo objt a partir de outro objt da mesma classe
		ScavTrap& operator= (const ScavTrap &copy); //sobrecarga do operador de atribuicao de copia: permite a atribuição de um objt a outro objt da mesma classe
		
		void	guardGate();
		void	attack(const std::string& target);

		~ScavTrap(); //destructor 
};

#endif