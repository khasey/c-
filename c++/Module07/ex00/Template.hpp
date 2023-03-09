/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tempplate.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:24:34 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/09 11:28:57 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename S>
void swap(S& a, S& b)
{
	S c;
	c = a;
	a = b;
	b = c;
}

template<typename T>
T max(T const& a, T const& b)
{
	if(a > b)
		return (a);
	else
		return (b);	
}

template<typename M>
M min(M const& a, M const& b)
{
	if(a < b)
		return (a);
	else
		return (b);	
}
