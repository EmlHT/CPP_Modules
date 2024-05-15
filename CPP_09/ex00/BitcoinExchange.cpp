/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/15 14:25:33 by ehouot           ###   ########.fr       */
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

double stringToDouble(const std::string& str)
{
    double result = 0.0;
    std::istringstream iss(str);
    iss >> result;
    return result;
}

void    BitcoinExchange::fillMap()
{
	std::string line;
	std::size_t pos;
	std::string	date;
	std::string	value;
	std::ifstream ifs;
    ifs.open("data.csv", std::ifstream::in);
    if (ifs.is_open())
    {
		std::getline(ifs, line);
		while (std::getline(ifs, line))
		{
			pos = line.find(',');
			if (pos != std::string::npos) 
			{
        		date = line.substr(0, pos);
				value = line.substr(pos + 1);
    		}
			this->_map.insert(std::make_pair(date, (stringToDouble(value))));
		}
        ifs.close();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}

void    BitcoinExchange::treatInput(std::ifstream &ifs)
{
	std::string line;
	std::size_t pos;
	std::string	date;
	std::string	value;
	std::getline(ifs, line);
	if (line != "date | value")
		std::cout << "Error : First line should be \"date | value\"." << std::endl;
	while (std::getline(ifs, line))
	{
		pos = line.find(' | ');
		if (pos != std::string::npos) 
		{
    		date = line.substr(0, pos);
			if (date.length() != 10)
				std::cout << "Error : bad input => " << date << std::endl;
			value = line.substr(pos + 3);
			std::size_t pos2 = date.find('-');
			if (pos2 != std::string::npos)
			{
				
			}
    	}
		else
			std::cout << "Error : Wrong syntax" << std::endl;
	}
}

void	BitcoinExchange::displayMap( void ) const
{
    std::map<std::string, double>::const_iterator	it;
	std::map<std::string, double>::const_iterator	ite = this->_map.end();
	for (it = this->_map.begin(); it != ite; it++)
		std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
    std::cout << std::endl;
}
