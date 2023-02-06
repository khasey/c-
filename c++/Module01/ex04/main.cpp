/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:31:48 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:38:17 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main()
{
    std::string filename;
    std::string s1;
    std::string s2;

    std::cout << c_pre "Enter the filename: " << c_pos;
    std::cin >> filename;
    std::cout << c_pre << "Enter the string to replace: " << c_pos;
    std::cin >> s1;
    std::cout << c_pre << "Enter the string to replace with: " << c_pos;
    std::cin >> s2;
    Replace replace(filename, s1, s2);
    replace.replace();
    return (0);
}