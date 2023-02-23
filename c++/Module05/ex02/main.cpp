/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:08 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/23 11:59:41 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
//----------------------------------TEST AVEC LE FORMULAIRE SHRUBERRY--------------------
	try
	{
		std::cout << "-----test form_Shruberry-----" << std::endl;
		std::cout << std::endl;
		Bureaucrat b1("Jeanne", 100);
		Bureaucrat b2("D'arc", 150);
		std::cout << "---------------------------" << std::endl;
		Form* f1 = new ShrubberyCreationForm("jardin");
		std::cout << b1 << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << b2 << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << *f1 << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		f1->execute(b1);
		std::cout << "---------------------------" << std::endl;
		b1.executeForm(*f1);
		std::cout << "---------------------------" << std::endl;
		f1->beSigned(b2);
		std::cout << "---------------------------" << std::endl;
		b2.signForm(*f1);
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		f1->beSigned(b1);
		std::cout << "---------------------------" << std::endl;
		b1.signForm(*f1);
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		f1->execute(b2);
		std::cout << "---------------------------" << std::endl;
		b2.executeForm(*f1);
		std::cout << "---------------------------" << std::endl;
		f1->execute(b1);
		std::cout << "---------------------------" << std::endl;
		b1.executeForm(*f1);
		std::cout << "---------------------------" << std::endl;
		std::cout << std::endl;
		delete f1;
		std::cout << std::endl;


//-----------------------------TEST_FORMULAIRE ROBOTOMY----------------------------------------------

	std::cout << "-----test form_Robotomy-----" << std::endl;
	std::cout << std::endl;
	Bureaucrat b3("Enzo et sa voix d'ange", 41);
	Bureaucrat b4("L'idalgo qui va a la salle", 46);
	std::cout << "---------------------------" << std::endl;
	Form* f2 = new RobotomyRequestForm("Atom");
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << b3 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << b4 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f2->beSigned(b3);
	std::cout << "---------------------------" << std::endl;
	b3.signForm(*f2);
	std::cout << "---------------------------" << std::endl;
	f2->beSigned(b1);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f2->beSigned(b4);
	std::cout << "---------------------------" << std::endl;
	b1.signForm(*f2);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f2->execute(b3);
	std::cout << "---------------------------" << std::endl;
	b3.executeForm(*f2);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	delete f2;
	std::cout << std::endl;

//----------------------------TEST_FORM_PRESIDENTIAL--------------------------------

	std::cout << "-----test form_Presidential-----" << std::endl;
	std::cout << std::endl;
	Bureaucrat b5("Michel c'est le Brésil", 3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	Form *f3 = new PresidentialPardonForm("Manau");
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << b5 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << *f3 << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f3->execute(b5);
	std::cout << "---------------------------" << std::endl;
	b5.executeForm(*f3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f3->beSigned(b5);
	std::cout << "---------------------------" << std::endl;
	b5.signForm(*f3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	f3->execute(b5);
	std::cout << "---------------------------" << std::endl;
	b5.executeForm(*f3);
	std::cout << "---------------------------" << std::endl;
	std::cout << std::endl;
	delete f3;
}
	catch(const std::exception& e)
    {
        std::cerr << c_red << e.what() << c_pos << std::endl;
    }
}
