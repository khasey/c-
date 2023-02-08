/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 03:37:09 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/07 18:32:37 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    //les atributs
    private:
        int _fixedPointValue;
        int const static _fractionalBits = 8;
        
    //les methodes
    public:
        Fixed();
        ~Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const& src);
        Fixed & operator=(const Fixed &rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);