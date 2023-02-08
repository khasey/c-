/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:10:56 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/07 03:30:47 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

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
        Fixed(Fixed const& src);
        Fixed & operator=(const Fixed &rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};