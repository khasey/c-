/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:15:51 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/15 22:16:39 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"
#define c_red "\001\033[0;31m\002"

/*grace a "virtual la resolution de l appel de fonction va devenir dynamic"*/

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        virtual ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& src);
        WrongCat& operator=(const WrongCat& rhs);
        virtual ~WrongCat();
        void makeSound() const;
};