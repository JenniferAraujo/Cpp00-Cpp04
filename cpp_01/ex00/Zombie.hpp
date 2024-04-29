#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <string>
#include <unistd.h>

class Zombie
{
	private:
		std::string	_name; //boa pratica variaveis privadas _
	public:
		Zombie(std::string name); // construtor inicializa e indica nascimento zombie
		~Zombie(void); // destrutor  e indica morte zombie
		void	announce(void); //  imprime o nome+BraiiiiiiinnnzzzZ...
		void    setName(std::string name); //serve p/ definir o nome do Zombie
};

Zombie* newZombie(std::string name ); // Aloca dinamicamente memória para um novo zombie com o nome fornecido e retorna um ponteiro para ele
void randomChump( std::string name ); // Cria um zombie localmente com o nome fornecido e o faz anunciar sua presença

#endif
