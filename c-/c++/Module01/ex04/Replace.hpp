/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:32:55 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:37:19 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>

#define c_pre "\001\033[1;34m\002"
#define c_pos "\001\033[0;0m\002"

class Replace
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        std::string _buffer;
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace();
        void replace(void);
};