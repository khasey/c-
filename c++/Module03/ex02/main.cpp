/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:05:12 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 18:56:43 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap p1("Chuck Norris");
    ScavTrap p2("boloss");
    FragTrap p3("bite douce");
    std::cout << "---- / ATTACK / ----" << std::endl;
    p1.attack("bill");
    p2.attack("lilou");
    p3.attack("benoit");
    p1.getStats();
    p2.getStatTrap();
    p3.getFragTrap();
    std::cout << "---- / TAKE DAMAGE / ----" << std::endl;
    p1.takeDamage(5);
    p2.takeDamage(5);
    p3.takeDamage(5);
    p1.getStats();
    p2.getStatTrap();
    p3.getFragTrap();
    std::cout << "---- / BE REPAIRED / ----" << std::endl;
    p1.beRepaired(5);
    p2.beRepaired(5);
    p3.beRepaired(5);
    p1.getStats();
    p2.getStatTrap();
    p3.getFragTrap();
    std::cout << "---- / GUARD GATE / ----" << std::endl;
    p2.guardGate();
    std::cout << "---- / HIGH FIVES GUYS / ----" << std::endl;
    p3.highFivesGuys();
    
    return(0);
}