#include "Zombie.hpp"

/*Cria um array de zombie com tamanho N e indica o nome, retorna ponteiro p primeiro elemento do array*/
Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
    {
		std::cout << "Error" << std::endl;
		return (0);
	}
    Zombie *zm = new Zombie[N];
    for(int i = 0; i < N; i++)
        zm[i].setName(name);
    return(zm);
}
