/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:39:25 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:41:42 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(); /*default constructor*/
        FragTrap(std::string name); /*constructor*/
        FragTrap(FragTrap const &copy); /*copy constructor*/
        ~FragTrap(); /*destructor*/
        FragTrap &operator=(FragTrap const &C); /*assignation operator*/
        void attack(std::string const &target);
        void getFragTrap();
        void highFivesGuys();
};