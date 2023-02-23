/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:11:06 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/23 11:12:22 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form() : _name("default"), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << c_pre << "Form default constructor called" << c_pos << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << c_pre << "--- / Form constructor called / ---" << c_pos << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
    	throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    _signed = false;
}

Form::Form(Form const &src) : _name(src._name), _signed(false), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << c_pre << "Form copy constructor called" << c_pos << std::endl;
    _signed = false;
}

Form::~Form()
{
    std::cout << c_red << "--- / Form destructor called / ---" << c_pos << std::endl;
}

Form& Form::operator=(Form const &rhs)
{
    if(this == &rhs)
        return *this;
    return *this;
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

bool Form::getSigned() const
{
    return this->_signed;
}

void Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else if(b.getGrade() < this->_gradeToSign)
		throw Form::GradeTooHighException();
	else
        this->_signed = true;
}

std::ostream& operator<<(std::ostream& o, Form const & rhs)
{
    o << "|--->" << c_pre  << rhs.getName() << " signed at the grade " << rhs.getGradeToSign() << " execute at " << rhs.getGradeToExecute() << c_pos << "<----|" << std::endl;
    return o;
}
