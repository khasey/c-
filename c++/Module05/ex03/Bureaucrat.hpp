/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:05 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/22 14:02:39 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

#define c_pre "\001\033\e[0;32m\002"
#define c_pos "\001\033[0;0m\002"
#define c_red "\001\033[0;31m\002"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string _name, int _grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        virtual ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
		void signForm(Form &Form);
		void executeForm(Form const & form) const;
        
        class GradeTooHighException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Bureaucrat::GradeTooHighException -> TOO HIGH ");
				}
		};
		class  GradeTooLowException :public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Bureaucrat::GradeTooLowException -> TOO LOW");
				}
		};
    protected:
        std::string _name;
        int _grade;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & rhs);
