/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:18:13 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:27:21 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp" // 1. Include HumanA.hpp header file

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) // 2. Define the constructor
{
}
HumanA::~HumanA() // 3. Define the destructor
{
}
void HumanA::attack(void) // 4. Define the attack function
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}


