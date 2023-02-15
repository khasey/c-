/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:05:12 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/14 16:53:58 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Chuck Norris");
    clap.getStats();
    clap.attack("la TARGET");
    clap.getStats();
    clap.takeDamage(6);
    clap.getStats();
    clap.beRepaired(5);
    clap.getStats();
    return(0);
}