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

};
#endif
