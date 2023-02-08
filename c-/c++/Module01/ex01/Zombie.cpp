/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:26:02 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/01 17:45:58 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << c_pre << "Zombie was created" << c_pos <<std::endl;
}
Zombie::~Zombie()
{
    std::cout << c_pre << p_name << ": Zombie was destroyed" << c_pos << std::endl;
}
Zombie::Zombie (std::string name) : p_name(name)
{
    p_name = name;
}
std::string Zombie::set_name(std::string name)
{
    p_name = name;
    return(name);
}
void Zombie::announce() const
{
    std::cout << c_pre << p_name << ": Braiiiiiiinnnssss..." << c_pos << std::endl;
}

