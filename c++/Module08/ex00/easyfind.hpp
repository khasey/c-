/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:19:03 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/14 09:09:24 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


/*ce code est un moyen simple de trouver une valeur dans un conteneur STL 
et de gérer les cas où la valeur n'est pas présente en lançant une exception.*/

template<typename T>
void easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        std::cout << n << "--- / Not found / ---" << std::endl;
    else
        std::cout << n << "--- / Found / ---" << std::endl;    
}

/* Un conteneur STL (Standard Template Library) est une structure de données générique fournie par la bibliothèque 
standard C++ qui permet de stocker des éléments d'un même type. Les conteneurs STL 
sont des classes qui fournissent des interfaces pour stocker, manipuler et accéder aux éléments de données. */

