/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:15:54 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/08 14:16:30 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <float.h>

struct Base
{
    virtual ~Base() {}
};

struct A : public Base {};
struct B : public Base {};
struct C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

