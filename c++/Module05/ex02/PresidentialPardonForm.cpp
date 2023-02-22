/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:55:13 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/22 13:34:08 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"

class PresidantialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidantialPardonForm();
		PresidantialPardonForm(std::string target);
		PresidantialPardonForm(PresidantialPardonForm const & src);
		~PresidantialPardonForm();
		PresidantialPardonForm & operator=(PresidantialPardonForm const & rhs);
		void execute(Bureaucrat const & executor) const;
};
