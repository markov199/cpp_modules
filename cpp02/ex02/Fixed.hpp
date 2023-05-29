#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
    private:
        int _rawBits;
        static const int  _fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(Fixed const &fp);
        Fixed(const int N);
        Fixed(const float N);
        ~Fixed(void);
        Fixed &operator=(const Fixed &rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed operator+(const Fixed &rhs);
        Fixed operator-(const Fixed &rhs);
        Fixed operator*(const Fixed &rhs);
        Fixed operator/(const Fixed &rhs);


        bool operator!=(const Fixed &rhs);
        bool operator<(const Fixed &rhs);
        bool operator>(const Fixed &rhs);
        bool operator==(const Fixed &rhs);
        bool operator>=(const Fixed &rhs);
        bool operator<=(const Fixed &rhs);

        static Fixed &min(Fixed &fp1, Fixed &fp2);
        static Fixed &max(Fixed &fp1, Fixed &fp2);
        static const Fixed &min(const Fixed &fp1, const Fixed &fp2);
        static const Fixed &max(const Fixed &fp1, const Fixed &fp2);

        Fixed operator++(int); //post increment
        Fixed &operator++();	// pre increment
        Fixed operator--(int);
        Fixed &operator--();

};

std::ostream &operator<<(std::ostream &os, const Fixed &fp);

#endif