/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot < ehouot@student.42nice.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/08 20:54:45 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &src )
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &	BitcoinExchange::operator=( const BitcoinExchange &rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

void    BitcoinExchange::fillMap() const
{
	std::string tmp;
	std::ifstream ifs;
    ifs.open("data.csv", std::ifstream::in);
    if (ifs.is_open())
    {
		std::getline(ifs, tmp);
		std::string date = extractDate(tmp);
		if (tmp == )
		{
			
		}
        ifs.close();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
	
}
