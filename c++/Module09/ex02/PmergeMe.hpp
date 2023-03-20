/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:13:44 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/20 19:16:08 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <list>
#include <algorithm>
#include <ctime>
#include <iostream>
#include <sstream>
#include <cstdlib>

class PmergeMe {
public:
    PmergeMe(const std::vector<int>& sequence);
    void sort();
    std::vector<int> getSortedSequence() const;
    double getTimeUsedVector() const;
    double getTimeUsedList() const;
    void mergeInsertionSort(std::list<int>& sequence);
    void mergeInsertionSort(std::vector<int>& sequence);
private:
    std::vector<int> m_sequence;
    std::vector<int> m_sortedVector;
    std::list<int> m_sortedList;
    double m_timeUsedVector;
    double m_timeUsedList;
};