#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>


class Fixed
{
    private:
        int _rawBits;
        static const int  _fractionalBits = 8;
        void setRawBits(int const raw);

    public:
        Fixed(void);
        Fixed(Fixed const &fp);
        Fixed &operator=(const Fixed &rhs);
        ~Fixed(void);
        int getRawBits(void) const;

        Fixed(const int N);
        Fixed(const float N);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator << (std::ostream &os,Fixed const&rhs);

#endif