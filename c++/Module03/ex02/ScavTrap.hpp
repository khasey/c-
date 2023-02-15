/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:05:32 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:26:29 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); /*default constructor*/
        ScavTrap(std::string name); /*constructor*/
        ScavTrap(ScavTrap const &copy); /*copy constructor*/
        ~ScavTrap(); /*destructor*/
        ScavTrap &operator=(ScavTrap const &C); /*assignation operator*/
        void attack(std::string const &target);
        void getStatTrap();
        void guardGate();
};