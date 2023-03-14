/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:49:52 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/14 10:20:41 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>
#include <iostream>
#include <iterator>
#include <algorithm>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(MutantStack const &src) : std::stack<T>(src) {};
        ~MutantStack() {};
        MutantStack &operator=(MutantStack const &rhs) { std::stack<T>::operator=(rhs); return (*this); };
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); };
        iterator end() { return (std::stack<T>::c.end()); };
};

/* La classe "MutantStack" étend les fonctionnalités de "stack" en ajoutant deux nouvelles méthodes "begin" et "end" pour permettre l'itération sur la pile.

    La classe est un modèle qui prend un type de données générique "T" comme paramètre.

    Le constructeur par défaut initialise un objet "MutantStack" vide.

    Le constructeur de copie copie une pile "MutantStack" source dans un nouvel objet "MutantStack".

    Le destructeur par défaut ne fait rien de particulier car tous les membres de la classe sont gérés par la classe parente "stack".

    L'opérateur d'assignation copie le contenu d'un objet "MutantStack" source dans l'objet appelant.

    La classe utilise un typedef pour définir un itérateur sur le type de conteneur sous-jacent de "stack" pour permettre l'itération sur la pile.

    La méthode "begin" renvoie un itérateur pointant sur le premier élément de la pile.

    La méthode "end" renvoie un itérateur pointant sur l'élément suivant le dernier élément de la pile. */