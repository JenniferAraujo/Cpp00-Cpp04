#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <string>
# include <cctype>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <iomanip> 
#include <cmath>
# include <cstdlib>
# include <ctime>

class Fixed
{
    private:
        int _fixedPoint; //armazena o valor do n fixed point
        static const int    _fract = 8; //armazena o n de bits fracionarios, sempre 8.
    public:
        Fixed(); // simples construtor: inicializa novos objetos
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &copy); //copia constructor: permite criação de um novo objt a partir de outro objt da mesma classe
        Fixed& operator= (const Fixed &copy); //sobrecarga do operador de atribuicao de copia: permite a atribuição de um objt a outro objt da mesma classe
        ~Fixed(); //destructor
        int getRawBits( void ) const; //Retorna o valor bruto do valor de ponto fixo, Ou seja, retorna o valor inteiro que representa o número de ponto fixo sem nenhuma manipulação
        void setRawBits( int const raw ); //Define o valor bruto do numero de ponto fixo, ou seja, permite definir o valor do numero de ponto fixo com um valor inteiro fornecido
        float toFloat( void ) const; // converte o valor fixo em um valor de ponto flutuante
        int toInt( void ) const; //converte o valor fixo em um valor inteiro
};

std::ostream& operator<< (std::ostream& out, const Fixed &copy); // Sobrecarga do operador de inserção (<<) p/ imprimir um ponto flutuante do numero fixo

#endif