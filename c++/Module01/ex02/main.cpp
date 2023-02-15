/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:53:12 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:08:55 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    /*pointeur sur la string*/
    std::string *ptr = &str;
    /*reference sur la string*/
    std::string &ref = str;
    /*afficher l adresse memoire des elements*/
    std::cout << "str: " << &str << std::endl;
    std::cout << "ptr: " << &ptr << std::endl;
    std::cout << "ref: " << &ref << std::endl;
    /*afficher les valeurs*/
    std::cout << "str: " << str << std::endl;
    std::cout << "ptr: " << *ptr << std::endl;
    std::cout << "ref: " << ref << std::endl;
    return (0);
}