/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:32:21 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/09 11:32:26 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
    std::cout << "--Test 1--" << std::endl;
    
    int tab[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = 9;
    iter<int>(tab, size, f<int>);
    std::cout << "------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "--Test 2--" << std::endl;
    char tab2[8] = "Bonjour";
    int size2 = 8;
    iter<char>(tab2, size2, f<char>);
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;
}
