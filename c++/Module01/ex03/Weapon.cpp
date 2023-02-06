/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:15:50 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:29:39 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp" // include the header file

void Weapon::setType(std::string type) // define the method "setType"
{
    this->_type = type; // set the value of _type to the value of type
}
std::string const &Weapon::getType(void) // define the method "getType"
{
    return (this->_type); // return the value of _type
}
Weapon::Weapon(std::string type) // define the constructor of the class
{
    this->_type = type; // set the value of _type to the value of type
}

Weapon::~Weapon() // define the destructor of the class
{
}
