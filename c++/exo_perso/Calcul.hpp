/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calcul.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:24:24 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 20:46:30 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Calcul
{
    //les atributs
    private:
        int size;
        int hauteur;
        
    //les methodes
    public:
        int calcultaille();
        Calcul();
        ~Calcul();
    
};
