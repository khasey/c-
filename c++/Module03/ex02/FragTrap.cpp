/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:44:03 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:53:45 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// This is a constructor that takes no parameters
// and sets the default values for the class
// this is the default constructor
FragTrap::FragTrap()
{
    std::cout << c_pre << "--- / FragTrap default constructor called / ---" << c_pos << std::endl;
}

// This is a constructor that takes a string as a parameter
// and sets the default values for the class
// this is the default constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << c_pre << "--- / FragTrap constructor called / ---" << c_pos << std::endl;
    this->_name = name;
    this->_lifePoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

// This is a copy constructor that takes a FragTrap as a parameter
// and sets the values for the class
// this is the copy constructor
FragTrap::FragTrap(FragTrap const &copy)
{
    std::cout << c_pre << "--- / FragTrap copy constructor called / ---" << c_pos << std::endl;
    *this = copy;
}

// This is a destructor that takes no parameters
// destroys the FragTrap object
// this is the destructor
FragTrap::~FragTrap()
{
    std::cout << c_pre << "--- / FragTrap destructor called / ---" << c_pos << std::endl;
}

// This is an assignation operator that takes a FragTrap as a parameter
// and sets the values for the class
// this is the assignation operator
FragTrap &FragTrap::operator=(FragTrap const &C)
{
    std::cout << c_pre << "FragTrap assignation operator called" << c_pos << std::endl;
    ClapTrap::operator=(C);
    return *this;
}

// This is a function that takes no parameters
// and returns nothing
// this is the attack function
void FragTrap::attack(std::string const &target)
{
    if(this->_energyPoints > 0 && this->_lifePoints)
    {
        std::cout << c_pre << "FR4G-TP " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << c_pos << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << c_pre << "FR4G-TP " << this->_name << " is out of energy" << c_pos << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << c_pre << "FR4G-TP " << this->_name << " gives high fives" << c_pos << std::endl;
}

void FragTrap::getFragTrap()
{
    std::cout << c_pre << "--- / FragTrap stats / ---" << c_pos << std::endl;
    std::cout << "| Life Points:   " << this->_lifePoints << " |" << std::endl;
    std::cout << "| Energy Points: " << this->_energyPoints << " |" << std::endl;
    std::cout << "| Attack Damage: " << this->_attackDamage << " |" << std::endl;
    std::cout << c_pre << "------- / Stats / --------" << c_pos << std::endl;
}