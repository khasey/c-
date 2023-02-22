/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:55:17 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/22 13:36:03 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << c_pre << "--- / PresidentialPardonForm default constructor called / ---" << c_pos << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << c_pre << "--- / PresidentialPardonForm constructor called / ---" << c_pos << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	std::cout << c_pre << "--- / PresidentialPardonForm copy constructor called / ---" << c_pos << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << c_red << "--- / PresidentialPardonForm destructor called / ---" << c_pos << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << c_pre << "--- / PresidentialPardonForm assignation operator called / ---" << c_pos << std::endl;
	this->_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
		std::cout << c_pre << this->_target << " has been pardoned by Zafod Beeblebrox" << c_pos << std::endl;
}

