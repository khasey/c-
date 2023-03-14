/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:18:19 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/14 09:10:46 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        l.push_back(i);
    }
    easyfind(v, 5);
    easyfind(v, 10);
    easyfind(l, 5);
    easyfind(l, 10);
    return (0);
}