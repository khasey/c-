/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:55:25 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/23 11:43:22 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << c_pre << "Default constructor called" << c_pos << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << c_pre << "Constructor called" << c_pos << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	std::cout << c_pre << "Copy constructor called" << c_pos << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << c_red << "Destructor called" << c_pos << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << c_pre << "Assignation operator called" << c_pos << std::endl;
	this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw ShrubberyCreationForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream file;
		file.open(this->_target + "_shrubbery");
		file << "          v" << std::endl;
		file << "         >X<" << std::endl;
		file << "          A" << std::endl;
		file << "         d$b" << std::endl;
		file << "      .d\\$$P" << std::endl;
		file << "    .d$i$$P" << std::endl;
		file << "   .d$$\\$$b" << std::endl;
		file << "  .d$$$\\$$$b" << std::endl;
		file << "  d$$$$i$$$$b" << std::endl;
		file << "  $$$b`$$$$$i" << std::endl;
		file << "  $$$b $$$$$b" << std::endl;
		file << "  $$$b $$$$$b" << std::endl;
		file << "  `$$b $$$$$$" << std::endl;
		file << "   `$$b`$$$$$" << std::endl;
		file << "    `$$b`$$$$" << std::endl;
		file << "     `Y$$$$P" << std::endl;
		file << "      `Y$$P" << std::endl;
		file << "        \"\"" << std::endl;
		file.close();
	}
}


