/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:12:33 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/14 10:09:31 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"
#define c_red "\001\033[0;31m\002"

class Span
{
    public:
        Span(unsigned int n);
        Span(Span const &src);
        ~Span();
        Span &operator=(Span const &rhs);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
    private:
        // Attribut privé représentant la taille du vecteur "_v"
        unsigned int _n;
        // Vecteur d'entiers privé pour stocker les nombres ajoutés par la méthode "addNumber"    
        std::vector<int> _v; 
        // Constructeur privé sans argument pour empêcher la création d'objets de cette classe sans utiliser le constructeur public approprié
        Span();   
};

