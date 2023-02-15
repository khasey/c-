/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:05:12 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:28:55 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap p1("Chuck Norris");
    ScavTrap p2("boloss");
    p1.getStats();
    p1.attack("bill");
    p2.attack("lilou");
    p1.takeDamage(5);
    p1.getStats();
    p2.getStatTrap();
    p2.takeDamage(5);
    p1.beRepaired(5);
    p2.takeDamage(19);
    p2.getStatTrap();
    p2.guardGate();
    
    return(0);
}