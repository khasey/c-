/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:35:50 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/30 21:27:56 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	secret;
	std::string	number;
public:
	void get_firstname();
	void get_lastname();
	void get_nickname();
	void get_secret();
	void get_number();
	void show_firstname() const;
	void show_lastname() const;
	void show_nickname() const;
	void show_contacts() const;
	void clear_contacts();
};