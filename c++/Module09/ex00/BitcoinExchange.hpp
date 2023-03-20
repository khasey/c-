/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthierry <kthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:57:56 by kthierry          #+#    #+#             */
/*   Updated: 2023/03/20 19:00:27 by kthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <map>
# include <stdexcept>
# include <fstream>
# include <sstream>
# include <iostream>

class BitcoinExchange {
	
	public:
		BitcoinExchange(const std::string& bitcoinPricesFile);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& other);
		double getExchangeRate(const std::string& date) const;
	
	private:
		std::map<std::string, double>* m_prices;
		void copy(const BitcoinExchange& other);
		void clear();

};


