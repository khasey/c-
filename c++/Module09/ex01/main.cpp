/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:07:53 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/20 19:11:27 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    // Vérifie le nombre d'argument
    if (argc == 2)
    {
        // Lance une instance et lance la méthode add_data
        RPN rpn;
        rpn.add_data(argv[1]);
    }
    else
        std::cout << "Error" << std::endl;
    return 0;
}