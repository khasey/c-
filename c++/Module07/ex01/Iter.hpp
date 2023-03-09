/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:32:39 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/09 11:36:27 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
void iter(T const *tab, int const size, void (*f)(T const &val))
{
	for(int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

template<typename T>
void f(T const &val)
{
	static int i = 0;
	std::cout << "tab[" << i << "] = " << val << std::endl;
	i++;
}
