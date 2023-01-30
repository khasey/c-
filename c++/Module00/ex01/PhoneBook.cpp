/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:38:46 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/30 22:59:27 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size (0), index (0) {
	
}
int 	PhoneBook::get_size() const
{
	return (this->size);
}
void	PhoneBook::add_contact()
{
	if(this->size + 1 == 9)
	{
		this->index = 0;
		this->contacts[this->index].clear_contacts();
		this->contacts[this->index].get_firstname();
		this->contacts[this->index].get_lastname();
		this->contacts[this->index].get_nickname();
		this->contacts[this->index].get_secret();
		this->contacts[this->index].get_number();
	}
	if (this->size + 1 < 9)
	{
		this->contacts[this->index].get_firstname();
		this->contacts[this->index].get_lastname();
		this->contacts[this->index].get_nickname();
		this->contacts[this->index].get_secret();
		this->contacts[this->index].get_number();
		this->index++;
		this->size++;
	}
}
void	PhoneBook::display_contact(int i) const
{
		return (this->contacts[i].show_contacts());
}
void	PhoneBook::display_phonebook(void) const
{
	// int i = 0;
	std::cout << std::endl;
	std::cout << c_pre << "|     Index" << "|";
	std::cout << c_pre << "First Name" << "|";
	std::cout << c_pre << " Last Name" << "|";
	std::cout << c_pre << "  Nickname" << "|" << std::endl;
	std::cout << c_pre << "--------------------------------------------" << c_pos << std::endl;

	if(this->size == 0)
		std::cout << "Phonebook is empty" << std::endl;
	else
	{
		for (int i = 0; i < this->size; i++)
		{
			std::cout << "|";
			std::cout << "         " << i + 1 << "|";
			this->contacts[i].show_firstname();
			std::cout << "|";
			this->contacts[i].show_lastname();
			std::cout << "|";
			this->contacts[i].show_nickname();
			std::cout << "|" << std::endl;
		}
	}
}

