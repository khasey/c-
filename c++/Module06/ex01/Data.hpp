/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:05:37 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/08 14:07:14 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <float.h>

struct Data
{
    int i;
    std::string data;
    Data(int i, std::string data) : i(i), data(data) {}
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
