/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:46:10 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/01 17:47:11 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}