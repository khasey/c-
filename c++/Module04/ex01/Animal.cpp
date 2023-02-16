/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:39:49 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/16 16:12:22 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << c_pre << "Animal constructor called" << c_pos << std::endl;
    this->_type = "Animal";
}

Animal::Animal(const Animal& src)
{
    std::cout << c_pre << "Animal copy constructor called" << c_pos << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << c_pre << "Animal assignation operator called" << c_pos << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << c_red << "Animal destructor called" << c_pos << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound: Grrrrr" << std::endl;
}

/*---------------------------------------------------------------------------*/

Dog::Dog() : Animal()
{
	brain = new Brain();
    std::cout << c_pre << "Dog constructor called" << c_pos << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog& src)
{
    std::cout << c_pre << "Dog copy constructor called" << c_pos << std::endl;
    *this = src;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << c_pre << "Dog assignation operator called" << c_pos << std::endl;
    if (this != &rhs)
    {
		delete brain;
		brain = new Brain();
        this->_type = rhs._type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << c_red << "Dog destructor called" << c_pos << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound: Woof" << std::endl;
}

std::string Dog::getType() const
{
	return this->_type;
}

/*---------------------------------------------------------------------------*/

Cat::Cat() : Animal()
{
    std::cout << c_pre << "Cat constructor called" << c_pos << std::endl;
    this->_type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& src)
{
    std::cout << c_pre << "Cat copy constructor called" << c_pos << std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << c_pre << "Cat assignation operator called" << c_pos << std::endl;
    if (this != &rhs)
    {
		delete brain;
		brain = new Brain();
        this->_type = rhs._type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << c_red << "Cat destructor called" << c_pos << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound : Meow" << std::endl;
}

std::string Cat::getType() const
{
	return this->_type;
}

/*---------------------------------------------------------------------------*/

Brain::Brain()
{
	std::cout << c_pre << "Brain constructor called" << c_pos << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << c_pre << "Brain copy constructor called" << c_pos << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << c_pre << "Brain assignation operator called" << c_pos << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << c_red << "Brain destructor called" << c_pos << std::endl;
}

/*---------------------------------------------------------------------------*/



