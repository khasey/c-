/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:55:20 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/22 13:57:32 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << c_pre << "--- / Default constructor called /---" << c_pos << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << c_pre << "--- / Roboto Constructor called /---" << c_pos << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	std::cout << c_pre << "--- / Copy constructor called /---" << c_pos << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << c_red << "--- / Destructor called /---" << c_pos << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << c_pre << "--- / Assignation operator called /---" << c_pos << std::endl;
	this->_target = rhs._target;
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::GradeTooHighException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << c_pre << "-- / target Robotomise / --" << c_pos << std::endl;
		if (rand() % 2)
			std::cout << c_pre << this->_target << " has been robotomized successfully" << c_pos << std::endl;
		else
			std::cout << c_red << this->_target << " hasn't been robotomized" << c_pos << std::endl;
	}
}
