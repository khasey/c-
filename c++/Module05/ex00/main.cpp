/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:08 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/20 11:12:01 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *b = new Bureaucrat("Chuck Norris", 156);
    std::cout << *b;
    delete b;
    return 0;
}