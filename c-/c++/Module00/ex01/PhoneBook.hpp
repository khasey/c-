/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:37:43 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/30 20:46:32 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>

#define c_pre "\001\033[1;34m\002"
#define c_pos "\001\033[0;0m\002"

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook();
	int 	get_size(void) const;
	void	add_contact();
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
};