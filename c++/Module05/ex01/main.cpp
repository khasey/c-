/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:37:08 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/23 11:13:10 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
    	Form f("Form", 2, 2);
    	Bureaucrat b("Chuck Norris", 2);
    	std::cout << f;
    	std::cout << b;
    	b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << c_red << e.what() << c_pos << std::endl;
	}
    return 0;
}
