/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:22:33 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:29:11 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon) // sets the weapon for the HumanB
{
    this->_weapon = &weapon;
}
HumanB::~HumanB()
{
}
HumanB::HumanB(std::string name)
{
    this->_name = name; // sets the name for the HumanB
}
void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl; // prints the name and weapon of the HumanB
}
