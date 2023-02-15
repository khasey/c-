/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:20:08 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/01 00:11:15 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"

class Zombie
{
    private:
        std::string	name;
        std::string	type;
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std::string name);
        void set_type(std::string type);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);