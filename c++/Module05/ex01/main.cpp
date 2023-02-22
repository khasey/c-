/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:08 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/21 13:53:49 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form *f = new Form("Form", 1, 5);
    Bureaucrat *b = new Bureaucrat("Chuck Norris", 6);
    std::cout << *f;
    std::cout << *b;
    b->signForm(*f);
    std::cout << *f;
    delete f;
    delete b;
    
    return 0;
}