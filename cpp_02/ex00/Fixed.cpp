#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(): _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Fixed::Fixed(const Fixed &copy) : _fixedPoint(copy._fixedPoint)
{
        std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator overload
Fixed& Fixed::operator= (const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _fixedPoint = copy._fixedPoint;
    return *this;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
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