/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:43:50 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/01 00:14:16 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << c_pre << "-------------one--------------" << c_pos << std::endl;
    Zombie *zombie = new Zombie();
    zombie->set_name("kthierry");
    zombie->announce();
    delete zombie;
    std::cout << c_pre << "-------------two---------------" << c_pos << std::endl;
    Zombie *zombie2 = new Zombie();
    zombie2->set_name("k2");
    zombie2->announce();
    delete zombie2;
    std::cout << c_pre << "-------------three-------------" << c_pos << std::endl;
    randomChump("k3");
    std::cout << c_pre << "--------viva l'algerie---------" << c_pos << std::endl;
    return (0);
}