/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:39:14 by kthierry          #+#    #+#             */
/*   Updated: 2023/01/30 18:39:04 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){
	bool exit = false;
	PhoneBook phonebook;
	//la cmd de l'utilisateur
	std::string cmd;
	
	while(!exit)
	{
		std::cout << c_pre << "---------------------------------- " << c_pos << std::endl;
		std::cout << c_pre << "Choose your command -------------->" << c_pos << std::endl;
		std::cout << c_pre << "1.= ADD --> 2.= SEARCH --> 3.= EXIT" << c_pos << std::endl;
		std::cout << c_pre << "-----------------------------------" << c_pos << std::endl;
		std::cout << c_pre << "Write your choice: " << c_pos << std::endl;
		getline(std::cin, cmd);

		if(cmd == "ADD")
			phonebook.add_contact();
		else if(cmd == "SEARCH")
			phonebook.display_phonebook();
		else if(cmd == "EXIT")
			exit = true;
		else
			std::cout << c_pre << "Wrong command" << c_pos << std::endl;
	}
	return 0;
}