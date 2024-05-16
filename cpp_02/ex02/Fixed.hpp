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
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define PURPLE "\033[1;35m"
# define YELLOW "\033[1;33m"
# define WHITE 	"\033[1;37m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

class Fixed
{
    private:
        int _fixedPoint; //armazena o valor do n fixed point
        static const int    _fract = 8; //armazena o n de bits fracionarios, sempre 8.
    public:
		//construtores
        Fixed(); // simples construtor: inicializa novos objetos
        Fixed(const int value); // Converte int em valor fixed point
        Fixed(const float value); // Converte float em valor fixed point 
        Fixed(const Fixed &copy); //copia constructor: permite criação de um novo objt a partir de outro objt da mesma classe

        Fixed& operator= (const Fixed &copy); //sobrecarga do operador de atribuicao de copia: permite a atribuição de um objt a outro objt da mesma classe
		
		//Operadores de comparação > < >= <= == !=
		bool operator> (const Fixed &numCompare);
		bool operator< (const Fixed &numCompare);
		bool operator>= (const Fixed &numCompare);
		bool operator<= (const Fixed &numCompare);
		bool operator== (const Fixed &numCompare);
		bool operator!= (const Fixed &numCompare);
	
		//Operadores aritméticos + - * /
		Fixed operator+ (const Fixed &copy);
		Fixed operator- (const Fixed &copy);
		Fixed operator* (const Fixed &copy);
		Fixed operator/ (const Fixed &copy);

		//Operadores incremento/decremento ++i i++ --i i--
		Fixed operator++ (); 
		Fixed operator++ (int);
		Fixed operator-- ();
		Fixed operator-- (int);

        int getRawBits( void ) const; //Retorna o valor bruto do valor de ponto fixo, Ou seja, retorna o valor inteiro que representa o número de ponto fixo sem nenhuma manipulação
        void setRawBits( int const raw ); //Define o valor bruto do numero de ponto fixo, ou seja, permite definir o valor do numero de ponto fixo com um valor inteiro fornecido
        
		float toFloat( void ) const; // converte o valor fixo em um valor de ponto flutuante
        int toInt( void ) const; //converte o valor fixo em um valor inteiro

		// Retorna min e max 
		static Fixed&	min(Fixed &F1, Fixed &F2);
		static const Fixed&	min(Fixed const &F1, Fixed const &F2);
		static Fixed&	max(Fixed &F1, Fixed &F2);
		static const Fixed&	max(Fixed const &F1, Fixed const &F2);
		
		//Destructor
		~Fixed(); //destructor
};

std::ostream& operator<< (std::ostream& out, const Fixed &copy); // Sobrecarga do operador de inserção (<<) p/ imprimir um ponto flutuante do numero fixo

#endif