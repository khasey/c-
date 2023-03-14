/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:13:05 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/14 10:14:42 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
    std::cout << c_pre << "--- / Constructor called / ---" << c_pos <<std::endl;
    return;
}

Span::Span(Span const &src)
{
    std::cout<< c_pre << "--- / Copy constructor called / ---" << c_pos <<std::endl;
    *this = src;
    return;
}

Span::~Span()
{
    std::cout << c_red << "--- / Destructor called / ---" << c_pos << std::endl;
    return;
}

// Opérateur d'assignation
Span &Span::operator=(Span const &rhs)
{
    this->_n = rhs._n;
    this->_v = rhs._v;
    return *this;
}

// Méthode publique pour ajouter un entier "n" au vecteur "_v"
void Span::addNumber(int n)
{
    // Vérifie si le vecteur "_v" n'a pas atteint sa taille maximale "_n"
    if (this->_v.size() < this->_n)
        // Ajoute l'entier "n" à la fin du vecteur "_v"
        this->_v.push_back(n);
    else
        // Lance une exception si la taille maximale du vecteur a été atteinte
        throw std::exception();
}

// Méthode publique pour calculer la différence entre les deux éléments les plus proches dans le vecteur "_v"
int Span::shortestSpan()
{
    // Lance une exception si le vecteur "_v" ne contient pas au moins deux éléments
    if (this->_v.size() < 2)
        throw std::exception();

    // Crée une copie du vecteur "_v" pour le trier sans modifier l'objet actuel
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());

    // Initialise la variable "min" avec la différence entre les deux premiers éléments du vecteur trié
    int min = v[1] - v[0];

    // Parcourt le vecteur trié pour trouver la différence la plus petite entre deux éléments consécutifs
    for (size_t i = 2; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] < min)
            min = v[i] - v[i - 1];
    }

    // Retourne la différence la plus petite trouvée
    return min;
}

// Méthode publique pour calculer la différence entre le plus grand et le plus petit élément dans le vecteur "_v"
int Span::longestSpan()
{
    // Lance une exception si le vecteur "_v" ne contient pas au moins deux éléments
    if (this->_v.size() < 2)
        throw std::exception();

    // Crée une copie du vecteur "_v" pour le trier sans modifier l'objet actuel
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());

    // Retourne la différence entre le dernier élément (le plus grand) et le premier élément (le plus petit) du vecteur trié
    return v[v.size() - 1] - v[0];
}




