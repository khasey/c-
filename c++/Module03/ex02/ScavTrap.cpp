/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:16:20 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:32:23 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


// This is a constructor that takes no parameters
// and sets the default values for the class
// this is the default constructor
ScavTrap::ScavTrap()
{
    std::cout << c_pre << "--- / ScavTrap default constructor called / ---" << c_pos << std::endl;
}

// This is a constructor that takes a string as a parameter
// and sets the default values for the class
// this is the default constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << c_pre << "--- / ScavTrap constructor called / ---" << c_pos << std::endl;
    this->_name = name;
    this->_lifePoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

// This is a copy constructor that takes a ScavTrap as a parameter
// and sets the values for the class
// this is the copy constructor
ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std::cout << c_pre << "--- / ScavTrap copy constructor called / ---" << c_pos << std::endl;
    *this = copy;
}

// This is a destructor that takes no parameters
// destroys the ScavTrap object
// this is the destructor
ScavTrap::~ScavTrap()
{
    std::cout << c_pre << "--- / ScavTrap destructor called / ---" << c_pos << std::endl;
}

// This is an assignation operator that takes a ScavTrap as a parameter
// and sets the values for the class
// this is the assignation operator
ScavTrap &ScavTrap::operator=(ScavTrap const &C)
{
    std::cout << c_pre << "ScavTrap assignation operator called" << c_pos << std::endl;
    ClapTrap::operator=(C);
    return *this;
}

// This is a function that takes a string as a parameter
// and makes the ScavTrap attack the target
// this is the attack function
void ScavTrap::attack(std::string const &target)
{
    if(this->_energyPoints > 0 && this->_lifePoints > 0)
    {
        std::cout << c_pre << "ScavTrap " << this->_name 
                  << " attack " << target << ", causing " 
                  << this->_attackDamage << " points of damage!" << c_pos << std::endl;
        this->_energyPoints--;
    }
    else  
        std::cout << c_pre << "ScavTrap " << this->_name << " is dead!" << c_pos << std::endl;
}

// This is a function that takes no parameters
// and makes the ScavTrap guard the gate
// this is the guardGate function
void ScavTrap::guardGate()
{
    std::cout << c_pre << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << c_pos << std::endl;
}

// This is a function that takes no parameters
// and prints the stats of the ScavTrap
// this is the getStatTrap function
void ScavTrap::getStatTrap()
{
    std::cout << c_pre << "--- / ScavTrap stats / ---" << c_pos << std::endl;
    std::cout << "| Life Points:   " << this->_lifePoints << " |" << std::endl;
    std::cout << "| Energy Points: " << this->_energyPoints << " |" << std::endl;
    std::cout << "| Attack Damage: " << this->_attackDamage << " |" << std::endl;
    std::cout << c_pre << "------- / Stats / --------" << c_pos << std::endl;
}
