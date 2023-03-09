/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:24:05 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/09 11:24:31 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int main()
{
    int a = 2;
    int b = 3;

    std::cout << "----TEST 1----" << std::endl;
    std::cout << std::endl;

    std::cout << "Before Swap" << std::endl;
    std::cout << "a = " << a << " , b = " << b << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "After Swap" << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << " , b = " << b << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Minimum" << std::endl;
    std::cout << "min(a, b) : " << ::min(a, b) << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Maximum" << std::endl;
    std::cout << "max(a, b) : " << ::max(a, b) << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "----TEST 2----" << std::endl;
    std::cout << std::endl;

    std::cout << "Before Swap" << std::endl;
    std::cout << "c = " << c << " , d = " << d << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "After Swap" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << " , d = " << d << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Minimum" << std::endl;
    std::cout << "min(c, d) : " << ::min(c, d) << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Maximum" << std::endl;
    std::cout << "max(c, d) : " << ::max(c, d) << std::endl;
    std::cout << "--------------------------" << std::endl;
    
}
