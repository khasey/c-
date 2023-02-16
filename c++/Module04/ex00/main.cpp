/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:36:09 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/15 22:14:33 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete j;//should not create a leak
    delete i;
    delete meta;

    std::cout << "------------------WrongAnimal-----------------" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* f = new WrongCat();
	std::cout << f->getType() << " " << std::endl;
	f->makeSound();
	meta2->makeSound();
	delete meta2;
	delete f;
    
    return 0;
}