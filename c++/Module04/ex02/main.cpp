/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:36:09 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/16 17:04:03 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


int main()
{
   //-----------------------------------TEST 1-------------------------------------------

	std::cout << "----------------------------------Test 1------------------------------------" << std::endl;
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << "-------------------------" << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	j->makeSound();
	std::cout << "-------------------------" << std::endl;
	i->makeSound();
	std::cout << std::endl;
	delete j;
	std::cout << "-------------------------" << std::endl;
	delete i;

//-----------------------------------TEST 2-------------------------------------------

	std::cout << "----------------------------------Test 2------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Tableau de 10 animaux" << std::endl;
	Animal* z[10];
	std::cout << std::endl;
	int ii = 0;
	while(ii < 5)
	{
		z[ii] = new Dog();
		std::cout << "-------------------------" << std::endl;
		ii++;
	}
	ii = 5;
	while(ii < 10)
	{
		z[ii] = new Cat;
		std::cout << "-------------------------" << std::endl;
		ii++;
	}
	std::cout << std::endl;
	std::cout << "--------------------ANIMALS SOUND-------------------------------" << std::endl;
	std::cout << std::endl;
	ii = 0;
	while(ii < 10)
	{
		z[ii]->makeSound();
		std::cout << "-------------------------" << std::endl;
		ii++;
	}
	std::cout << std::endl;
	ii = 0;
	while(ii < 10)
	{
		delete z[ii];
		std::cout << "-------------------------" << std::endl;
		ii++;
	}

	const Animal a = new Animal();

//-----------------------------------TEST 3-------------------------------------------
	// std::cout << "----------------------------------Test 3------------------------------------" << std::endl;
	// std::cout << std::endl;

	// Dog basic;
	// std::cout << "-----------------------" << std::endl;
	// {
	// 	Dog tmp = basic;
	// }
	// std::cout << "-----------------------" << std::endl;

	// return 0;
}

