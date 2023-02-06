/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:18:32 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:28:53 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File: 1.h
// Purpose: header file for 1.cpp
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack(void);
};