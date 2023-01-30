/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:36:44 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/30 22:01:54 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void Contact::get_firstname()
{
	std::cout << "Enter your firstname: ";
	getline(std::cin, firstname);
	// std::cout << std::endl;
}
void Contact::get_lastname()
{
	std::cout << "Enter your lastname: ";
	getline(std::cin, lastname);
	// std::cout << std::endl;
}
void Contact::get_nickname()
{
	std::cout << "Enter your nickname: ";
	getline(std::cin, nickname);
	// std::cout << std::endl;
}
void Contact::get_secret()
{
	std::cout << "Enter your darkest secret: ";
	getline(std::cin, secret);
	// std::cout << std::endl;
}
void Contact::get_number()
{
	std::cout << "Enter your phone number: ";
	getline(std::cin, number);
	// std::cout << std::endl;
}
void Contact::show_firstname() const
{
	/*utilisation de setw pour restreindre le nombre de caractères 
	extraits de l’objet firstname*/
	if(firstname.length() > 10)
		std::cout << std::setw(9) << firstname.substr(0, 9) << ".";	
	else
	{
		int line = firstname.length();
		line = 10 - line;
		std::cout << std::setw(line) << " " << firstname;
	}
}
void Contact::show_lastname() const
{
	if(lastname.length() > 10)
		std::cout << std::setw(9) << lastname.substr(0, 9) << ".";
	else
	{
		int line = lastname.length();
		line = 10 - line;
		std::cout << std::setw(line) << " " << lastname;
	}
}
void Contact::show_nickname() const
{
	if(nickname.length() > 10)
		std::cout << std::setw(9) << nickname.substr(0, 9) << ".";
	else
	{
		int line = nickname.length();
		line = 10 - line;
		std::cout << std::setw(line) << " " << nickname;
	}
}

void Contact::show_contacts() const
{
	std::cout << "Firstname: " << firstname << std::endl;
	std::cout << "Lastname: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Dark secret: " << secret << std::endl;
	std::cout << "Phone number: " << number << std::endl;
}
void Contact::clear_contacts()
{
	firstname.clear();
	lastname.clear();
	nickname.clear();
	secret.clear();
	number.clear();
}