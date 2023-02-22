/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:37:59 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/18 15:29:15 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"
#define c_red "\001\033[0;31m\002"

class Animal
{
    public:
        Animal();
        Animal(const Animal& src);
        Animal& operator=(const Animal& rhs);
        virtual ~Animal();
        virtual std::string getType() const;
        virtual void makeSound() const = 0;
    protected:
        std::string _type;    
};

class Brain
{
	public:
		Brain();
		Brain(const Brain& src);
		Brain& operator=(const Brain& rhs);
		virtual ~Brain();
	protected:
		std::string _ideas[100];	
};


class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& src);
        Dog& operator=(const Dog& rhs);
        virtual ~Dog();
		virtual std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string _type; 
	private:
		Brain* brain;
};

class Cat : public Animal 
{
    public:
        Cat();
        Cat(const Cat &src);
        Cat& operator=(const Cat& rhs);
        virtual ~Cat();
		virtual std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string _type; 
	private:
		Brain* brain;	  
};




