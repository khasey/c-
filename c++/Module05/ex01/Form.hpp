/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:11:03 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/21 11:43:12 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &src);
        ~Form();
        Form &operator=(Form const &rhs);
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat &b);
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
    private:
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);