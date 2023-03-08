/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:01:39 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/08 13:05:31 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Usage : ./Cast [arg]" << std::endl;
    else
        ft_convert(argv[1]);

        return 0;
}