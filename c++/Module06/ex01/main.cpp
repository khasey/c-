/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:05:17 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/08 14:06:33 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    std::cout << "----------test---------" << std::endl;
    std::cout << std::endl;


    Data d1(1, "bonjour");
    uintptr_t t1 = 0;

    std::cout << "---Before serialize---" << std::endl;
    std::cout << "d1(i) = " << d1.i << std::endl;
    std::cout << "d1(data) = " << d1.data << std::endl;
    std::cout << "t1 : " << t1 << std::endl;
    std::cout << "-----------------------------" << std::endl;

    t1 = serialize(&d1);
    std::cout << "---After serialize---" << std::endl;
    std::cout << "t1 : " << t1 << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;

    Data *d2 = new Data(0, "test");

    std::cout << "---Before deserialize---" << std::endl;
    std::cout << "d2(i) = " << d2->i << std::endl;
    std::cout << "d2(data) = " << d2->data << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;

    d2 = deserialize(t1);
    std::cout << "---After deserialize---" << std::endl;
    std::cout << "d2(i) = " << d2->i << std::endl;
    std::cout << "d2(data) = " << d2->data << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;
}