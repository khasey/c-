/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reaplce.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:34:16 by kthierry          #+#    #+#             */
/*   Updated: 2023/02/06 16:36:30 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::replace(void)
{
    std::ifstream ifs(this->_filename);
    std::ofstream ofs(this->_filename + ".replace");
    std::string buffer;

    if (ifs.is_open() && ofs.is_open())
    {
        while (std::getline(ifs, buffer))
        {
            while (buffer.find(this->_s1) != std::string::npos)
                buffer.replace(buffer.find(this->_s1), this->_s1.length(), this->_s2);
            ofs << buffer << std::endl;
        }
    }
    else
        std::cout << "Error: file not found" << std::endl;
}

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
    this->_filename = filename;
    this->_s1 = s1;
    this->_s2 = s2;
}

Replace::~Replace()
{
}
