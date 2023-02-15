/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:38:43 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:17:37 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"

class ClapTrap
{
    public:
        ClapTrap(); /*default constructor*/
        ClapTrap(std::string name); /*constructor*/
        ClapTrap(ClapTrap const &src); /*copy constructor*/
        ~ClapTrap(); /*destructor*/
        ClapTrap &operator=(ClapTrap const &rhs); /*assignation operator*/
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void getStats();
    protected:
        std::string _name;
        unsigned int _lifePoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    
};