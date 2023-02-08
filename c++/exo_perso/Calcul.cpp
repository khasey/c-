/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calcul.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:28:13 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 20:47:05 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Calcul.hpp"

Calcul::Calcul() : size(0), hauteur(0)
{
    
}

Calcul::~Calcul()
{
    
}
int Calcul::calcultaille(void)
{
    hauteur = 30;
    size = 50;
    return(hauteur * size);
}