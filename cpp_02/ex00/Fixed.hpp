#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <string>
# include <cctype>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <iomanip> 
# include <cstdlib>
# include <ctime>


class Fixed
{
    private:
        int _fixedPoint; //armazena o valor do n fixed point
        static const int    _fract = 8; //armazena o n de bits fracionarios, sempre 8 nesse caso.
    public:
        Fixed(); // simples construtor: inicializa novos objetos
        Fixed(const Fixed &copy); //copia constructor: permite criação de um novo objt a partir de outro objt da mesma classe
        ~Fixed(void); //destructor
        Fixed& operator= (const Fixed &copy); //sobrecarga do operador de atribuicao de copia: permite a atribuição de um objt a outro objt da mesma classe

        /*Retorna o valor bruto do valor de ponto fixo, Ou seja, retorna o valor inteiro que representa o número de ponto fixo sem nenhuma manipulação*/
        int getRawBits( void ) const;
        
        /*Define o valor bruto do número de ponto fixo, ou seja, permite definir o valor do número de ponto fixo com um valor inteiro fornecido*/
        void setRawBits( int const raw );
};

#endif