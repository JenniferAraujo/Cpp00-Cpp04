#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <iomanip> 
# include <cstdlib>
# include <ctime>

class	ClapTrap {
	private:
		std::string	 _name;
		int			_health; //saude do Claptrap
		int			_energy; //energia do Claptrap
		int			_attackDamage; //dano causado do ClapTrap no ataque
	public:
		//construtores
		ClapTrap(); //simples construtor: inicializa novos objetos
		ClapTrap(std::string name); //
		ClapTrap(const ClapTrap &copy); //copia constructor: permite criação de um novo objt a partir de outro objt da mesma classe

		//sobrecarga do operador de atribuicao de copia: permite a atribuição de um objt a outro objt da mesma classe
		ClapTrap& operator= (const ClapTrap &copy); 

		//Funcoes de acoes 
		void	attack(const std::string& target); //simula um ataque, imprime mensagem e diminui os pontos de vida do alvo de acordo com o dano de ataque
		void	takeDamage(unsigned int amount); //simula o ClapTrap recebendo danos, imprime mensagem com o dano e diminui os pontos de vida do Claptrap
		void	beRepaired(unsigned int amount); //simula o ClapTrap sendo reparado, imprime mensagem e aumenta os pontos de vida do ClapTrap

		std::string	getName() const;
		int	getHealth() const;
		int	getEnergy() const;
		int	getAttackDamage() const;

		//destructor
		~ClapTrap();
};

#endif