/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:03 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 17:02:18 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Harl harl;
        harl.complain(argv[1]);
    }
    else
        std::cout << "Usage : ./Harl [DEBUG | INFO | WARNING | ERROR]" << std::endl;
    return 0;
}        