#include<iostream>
#include"Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int N):_rawBits(N << _fractionalBits)
{
    // std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed(const float F):_rawBits(roundf(F * (1 << _fractionalBits)))
{
    // std::cout << "Float constructor called" <<std::endl;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    // std::cout << "Copy aasingment operator called" <<std::endl;
    if (this != &rhs)
        this->_rawBits = rhs.getRawBits();
    return (*this);
}


int Fixed::getRawBits(void)const
{
    return (_rawBits);
}

void Fixed::setRawBits(int const raw)
{
    _rawBits = raw;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_rawBits) / static_cast<float>(1 << _fractionalBits));
}


int Fixed::toInt( void ) const
{
    return (_rawBits >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &os,Fixed const&rhs)
{
	os << rhs.toFloat();
	return (os);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	_rawBits = _rawBits - 1;
	return(old);	
}

Fixed &Fixed::operator--()
{
	_rawBits = _rawBits - 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	_rawBits = _rawBits + 1;
	return(old);
}

Fixed &Fixed::operator++()
{
	_rawBits = _rawBits + 1;
	return (*this);
}

Fixed Fixed::operator+(const Fixed &rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	return (this->toFloat() / rhs.toFloat());
}



bool Fixed::operator!=(const Fixed &rhs)
{
	return (this->_rawBits != rhs._rawBits);
}

bool Fixed::operator<(const Fixed &rhs)
{
	return (this->_rawBits < rhs._rawBits);
}

bool Fixed::operator>(const Fixed &rhs)
{
	return (this->_rawBits > rhs._rawBits);
}

bool Fixed::operator==(const Fixed &rhs)
{
	return (this->_rawBits == rhs._rawBits);
}

bool Fixed::operator>=(const Fixed &rhs)
{
	return (!(this->_rawBits < rhs._rawBits));
}

bool Fixed::operator<=(const Fixed &rhs)
{
	return (!(this->_rawBits > rhs._rawBits));
}

Fixed &Fixed::min(Fixed &fp1, Fixed &fp2)
{
	if (fp1._rawBits < fp2._rawBits)
		return (fp1);
	return (fp2);
}

Fixed &Fixed::max(Fixed &fp1, Fixed &fp2)
{
	if (fp1._rawBits > fp2._rawBits)
		return (fp1);
	return (fp2);
}

const Fixed &Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1._rawBits < fp2._rawBits)
		return (fp1);
	return (fp2);
}

const Fixed &Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1._rawBits > fp2._rawBits)
		return (fp1);
	return (fp2);
}
