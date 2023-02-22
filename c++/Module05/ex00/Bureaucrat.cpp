/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:01 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/21 13:56:36 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
    std::cout << c_pre << "Bureaucrat default constructor called" << c_pos << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << c_pre << "--- / Bureaucrat constructor called / ---" << c_pos << std::endl;
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << c_red << e.what() << c_pos << std::endl;
    }
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if(this == &rhs)
        return *this;
    this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << c_red << "--- / Bureaucrat destructor called / ---" << c_pos << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const & rhs)
{
    o << "|--->" << c_pre  << rhs.getName() << ", bureaucrat grade " << rhs.getGrade()  << c_pos << "<----|" << std::endl;
    return o;
}



// Path: c++/Module05/ex00/main.cpp