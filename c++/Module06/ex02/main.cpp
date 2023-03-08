/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:15:03 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/08 14:20:53 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::cout << "-------test 1------(no generate)" << std::endl;
    std::cout << std::endl;

    Base* p1 = new A();
    Base* p2 = new B();
    Base* p3 = new C();

    identify(p1);
    std::cout << "----------------------" << std::endl;
    identify(p2);
    std::cout << "----------------------" << std::endl;
    identify(p3);
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    identify(*p1);
    std::cout << "----------------------" << std::endl;
    identify(*p2);
    std::cout << "----------------------" << std::endl;
    identify(*p3);
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-------test 2------(generate rand base)" << std::endl;
    std::cout << std::endl;

    Base *p6;
    Base *p4;
    Base *p5;

    srand(time(NULL));
    p6 = generate();
    p4 = generate();
    p5 = generate();

    identify(p6);
    std::cout << "----------------------" << std::endl;
    identify(p4);
    std::cout << "----------------------" << std::endl;
    identify(p5);
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;

    identify(*p6);
    std::cout << "----------------------" << std::endl;
    identify(*p4);
    std::cout << "----------------------" << std::endl;
    identify(*p5);
    std::cout << "----------------------" << std::endl;
    std::cout << std::endl;
}