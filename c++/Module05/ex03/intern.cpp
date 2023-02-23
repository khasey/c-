/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:50:59 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/23 12:54:53 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Form* Intern::makeForm(std::string name, std::string target)
{
	if (name == "presidential pardon")
		return new PresidentialPardonForm(target);
	else if (name == "robotomy request")
		return new RobotomyRequestForm(target);
	else if (name == "shrubbery creation")
		return new ShrubberyCreationForm(target);
	else
		throw Intern::UnknownFormException();
}
