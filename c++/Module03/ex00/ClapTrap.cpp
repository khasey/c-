/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:44:09 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 16:53:13 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << c_pre << "ClapTrap default constructor called" << c_pos << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << c_pre << "--- / ClapTrap constructor called / ---" << c_pos << std::endl;
    this->_name = name;
    this->_lifePoints = 10;
    this->_energyPoints = 1;
    this->_attackDamage = 5;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << c_pre << "--- / ClapTrap copy constructor called / ---" << c_pos << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << c_pre << "--- / ClapTrap destructor called / ---" << c_pos << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << c_pre << "ClapTrap assignation operator called" << c_pos << std::endl;
    this->_name = rhs._name;
    this->_lifePoints = rhs._lifePoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    if(this->_energyPoints > 0 && this->_lifePoints > 0)
    {
        std::cout << c_pre << "ClapTrap " << this->_name 
                  << " attack " << target << ", causing " 
                  << this->_attackDamage << " points of damage!" << c_pos << std::endl;
        this->_energyPoints--;
    }
    else  
        std::cout << c_pre << "ClapTrap " << this->_name << " is dead!" << c_pos << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_lifePoints > amount)
    {
        std::cout << c_pre << "ClapTrap " << this->_name 
                  << " take " << amount << " points of damage!" << c_pos << std::endl;
        this->_lifePoints -= amount;
    }
    else
    {   
        this->_lifePoints = 0;
        std::cout << c_pre << "ClapTrap " << this->_name << " is dead!" << c_pos << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_lifePoints > 0 && this->_energyPoints > 0)
    {
        std::cout << c_pre << "ClapTrap " << this->_name 
                  << " is repaired by " << amount << " points!" << c_pos << std::endl;
        this->_lifePoints += amount;
        this->_energyPoints--;
    }
    else if(this->_energyPoints <= 0)
    {
            std::cout << c_pre << "ClapTrap " << this->_name << " is out of energy" << std::endl;
    }
    else if(this->_lifePoints >= 10)
    {
        std::cout << c_pre << this->_name << " is already full life" << std::endl;
        this->_lifePoints = 10;
    }
    else
        std::cout << c_pre << "ClapTrap " << this->_name << " is dead!" << c_pos << std::endl;
}

void ClapTrap::getStats()
{
    std::cout << c_pre << "--- / ClapTrap stats / ---" << c_pos << std::endl;
    std::cout << "| Life Points:   " << this->_lifePoints << " |" << std::endl;
    std::cout << "| Energy Points: " << this->_energyPoints << " |" << std::endl;
    std::cout << "| Attack Damage: " << this->_attackDamage << " |" << std::endl;
    std::cout << c_pre << "------- / Stats / --------" << c_pos << std::endl;
}



