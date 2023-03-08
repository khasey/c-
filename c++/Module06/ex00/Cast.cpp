/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:03:40 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/08 14:03:22 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

void ft_convert(std::string str)
{
    std::cout << "char: ";
    try
    {
        int c = std::stoi(str);
        if (c < 0 || c > 127)
            throw std::exception();
        else if (std::isprint(c))
            std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "int: ";
    try
    {
        int i = std::stoi(str);
        std::cout << i << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "float: ";
    try
    {
        float f = std::stof(str);
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
    std::cout << "double: ";
    try
    {
        double d = std::stod(str);
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}
