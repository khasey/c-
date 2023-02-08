/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:17:23 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/01 17:45:38 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"

class Zombie
{
    private:
        std::string p_name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        std::string set_name(std::string name);
        void announce() const;
};

Zombie* zombieHorde( int N, std::string name );
