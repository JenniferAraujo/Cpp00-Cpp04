#include "Fixed.hpp"

// Default constructor: inicializa _fixedPoint 
Fixed::Fixed(): _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Construtor que aceita um valor inteiro
// Converte o valor inteiro value para o formato de ponto fixo multiplicando-o pelo fator de escala (2 elevado a 8)
Fixed::Fixed( const int value): _fixedPoint(value * (1 << _fract))
{
	std::cout << "Int constructor called" << std::endl;
}

//Construtor que aceita um valor de ponto flutuante 
// Converte o valor de ponto flutuante value para o formato de ponto fixo, arredondando o resultado da multiplicação do valor pelo fator de escala 
Fixed::Fixed( const float value): _fixedPoint(roundf(value * (1 << _fract)))
{
	std::cout << "Float constructor called" << std::endl;
}

// Copy constructor:  inicializa uma nova instância copiando o valor de _fixedPoint da instância copy
Fixed::Fixed(const Fixed &copy) : _fixedPoint(copy._fixedPoint)
{
        std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator overload: permite copiar os valores de _fixedPoint de uma instância copy para outra instância
Fixed& Fixed::operator= (const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _fixedPoint = copy._fixedPoint;
    return (*this);
}

// Member function to get raw bits
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

// Member function to set raw bits
void Fixed::setRawBits( int const raw )
{
        this->_fixedPoint = raw;
}

/*converte o valor fixo para um numero em ponto flutuante.  Divide o valor _fixedPoint pelo fator de escala, que e 2 elevado ao num de bits fracionarios _fract(8)
Ex: _fixedPoint = 100 e _fract = 8, a funcao retornara 100 / 256 = 0.390625. 256 pq 2 elevado a 8 e 256 que em binario e 10000000 ou seja, 1 << 8*/
float Fixed::toFloat( void ) const
{
	return ((float)this->_fixedPoint / (1 << this->_fract));
}

/*converte o valor fixo para um numero inteiro. Divide o valor _fixedPoint pelo fator de escala, que e 2 elevado ao numero de bits fracionarios _fract(8)
Mesmo ex: _fixedPoint = 100 e _fract = 8, a funcao retornara 100 / 256 = 0, pq na toInt ela guarda os bits da parte inteira e ignora completamente a parte fracionaria*/
int Fixed::toInt( void ) const
{
	return (this->_fixedPoint / (1 << this->_fract));
}

// Overloaded insertion operator <<
std::ostream& operator<< (std::ostream& out, const Fixed &copy)
{
	out << copy.toFloat();
	return (out);
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}