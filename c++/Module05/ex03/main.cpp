/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:08 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/23 12:58:50 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << "Formulary valid : (shrubbery creation) (robotomy request) (presidential pardon)" << std::endl;
    std::cout << std:: endl;

    Intern someRandomIntern;
    Form* rrf;

    rrf =  someRandomIntern.makeForm("presidential pardon", "Bender");

    if (rrf != NULL)
    {
        std::cout << *rrf << std::endl;
        std::cout << std:: endl;

        Bureaucrat b1("Patron", 1);
        std::cout << std::endl;
        rrf->beSigned(b1);
        b1.signForm(*rrf);
        std::cout << std::endl;
        rrf->execute(b1);
        b1.executeForm(*rrf);
        std::cout << std::endl;
    }
    delete rrf;
}
