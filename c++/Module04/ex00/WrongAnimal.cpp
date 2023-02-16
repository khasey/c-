/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:15:06 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/15 21:53:01 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// This is a constructor that takes no parameters
// and sets the default values for the class
// this is the default constructor
WrongAnimal::WrongAnimal()
{
    std::cout << c_pre << "--- / Animal default constructor called / ---" << c_pos << std::endl;
}

// This is a copy constructor that takes a Animal as a parameter
// and sets the values for the class
// this is the copy constructor

// This is a destructor that takes no parameters
// destroys the Animal object
// this is the destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << c_red << "--- / Animal destructor called / ---" << c_pos << std::endl;
}

// This is an assignation operator that takes a Animal as a parameter
// and sets the values for the class
// this is the assignation operator

std::string WrongAnimal::getType() const
{
    std::string myType = "the Animal type is: " + this->_type;
    return myType;
}

void WrongAnimal::makeSound() const
{
    std::cout << "the Animal sound is: rrrrrrrrrr" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << c_pre << "--- / Animal copy constructor called / ---" << c_pos << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << c_pre << "--- / Animal assignation operator called / ---" << c_pos << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

WrongCat::WrongCat()
{
    this->_type = "Cat";
    std::cout << c_pre << "--- / Cat constructor called / ---" << c_pos << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << c_red << "--- / Cat destructor called / ---" << c_pos << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "the Cat sound is : miou miou" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
    std::cout << c_pre << "--- / Cat copy constructor called / ---" << c_pos << std::endl;
    *this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << c_pre << "--- / Cat assignation operator called / ---" << c_pos << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}