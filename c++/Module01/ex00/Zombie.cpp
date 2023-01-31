/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:40:10 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/31 23:54:25 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::set_type(std::string type)
{
    this->type = type;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Zombie destroyed" << std::endl;
}

