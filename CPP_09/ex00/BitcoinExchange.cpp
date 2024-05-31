/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/31 10:18:40 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <climits>

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

int stringToInt(const std::string& str)
{
    int result = 0;
    std::istringstream iss(str);
    iss >> result;
    return result;
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

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int		BitcoinExchange::parseDate(std::string date) const
{
	std::size_t pos1 = date.find('-');
	if (pos1 == std::string::npos)
	{
        std::cerr << "Error : bad input => " << date << std::endl;
        return 1;
	}
	std::string year = date.substr(0, pos1);
	std::size_t pos2 = date.find('-', pos1 + 1);
	if (pos2 == std::string::npos)
	{
        std::cerr << "Error : bad input => " << date << std::endl;
        return 1;
	}
	std::string month = date.substr(pos1 + 1, pos2 - pos1 - 1);
	std::string day = date.substr(pos2 + 1);
	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
	{
        std::cerr << "Error : bad input => " << date << std::endl;
        return 1;
	}
	int yearInt = stringToInt(year);
	int monthInt = stringToInt(month);
	int dayInt = stringToInt(day);
	if (monthInt <= 0 || monthInt > 12 || dayInt <= 0 || dayInt > 31)
	{
		std::cerr << "Error : bad input => " << date << std::endl;
        return 1;
	}
	if ((yearInt < 2009 ))
	if ((monthInt > 12 || monthInt < 1) || (dayInt > 31 || dayInt < 1))
	{
		std::cerr << "Error : bad input => " << date << std::endl;
        return 1;
	}
	if (dayInt == 31 || (dayInt == 29 && monthInt == 2))
	{
		switch (monthInt)
		{
			case 4:
			case 6:
			case 9:
			case 11:
				std::cerr << "Error : bad input => " << date << std::endl;
				return 1;
			case 2:
				if (dayInt > 29)
				{
					std::cerr << "Error : bad input => " << date << std::endl;
					return 1;
				}
				if (!isLeapYear(yearInt))
				{
					std::cerr << "Error : bad input (Not a leap year) => " << date << std::endl;
					return 1;
				}
			default:
				break;
		}
	}
	return 0;
}

double		BitcoinExchange::findDate(std::string date) const
{
	std::map<std::string, double>::const_iterator posDate = this->_map.lower_bound(date);
	if (posDate == this->_map.begin() && posDate->first != date)
	{
		std::cerr << "Error : bad input => " << date << std::endl;
		return -1;
	}
	if (posDate == this->_map.end() || posDate->first != date)
	{
		// MODIF FIRST DATE HERE
		if (posDate != this->_map.begin())
		{
			--posDate;
			return (posDate->second);
		}
	}
	return (posDate->second);
}

bool	checkValue(std::string value)
{
	for (size_t i = 0; i < value.length(); i++)
	{
		if (!std::isdigit(value[i]) && value[i] != '.' && value[i] != '+' && value[i] != '-')
		{
			std::cout << "Error : bad number." << std::endl;
			return (false);
		}
	}
	if (value.empty() || value.find("..") != std::string::npos || value.find("-+") != std::string::npos 
		|| value.find("++") != std::string::npos || value.find("--") != std::string::npos
		|| value.find("+-") != std::string::npos || value.find(".-") != std::string::npos 
		|| value.find(".+") != std::string::npos
		|| (value.find(".") != std::string::npos && value.find(".") == 0)
		|| value.find("-.") == 0 || value.find("+.") == 0)
	{
    	std::cout << "Error : bad number." << std::endl;
		return (false);
    }
	else if (stringToDouble(value) > 2147483647)
	{
		std::cout << "Error : too large a number." << std::endl;
		return (false);
	}
	else if (stringToDouble(value) < 0)
	{
		std::cout << "Error : not a positive number." << std::endl;
		return (false);
	}
	return (true);
}

void    BitcoinExchange::treatInput(std::ifstream &ifs)
{
	std::string line;
	std::size_t pos;
	std::string	date;
	std::string	value;
	double coef;
	std::getline(ifs, line);
	if (line != "date | value")
		std::cout << "Error : First line should be \"date | value\"." << std::endl;
	while (std::getline(ifs, line))
	{
		coef = 0;
		pos = line.find(" | ");
		if (pos != std::string::npos) 
		{
    		date = line.substr(0, pos);
			value = line.substr(pos + 3);
			if (parseDate(date) == 0)
			{
				coef = findDate(date);
				if (coef == -1)
					continue;
				if (checkValue(value) == false)
					continue;
				else
					std::cout << date << " => " << value << " = " << coef * stringToDouble(value) << std::endl;
			}
    	}
		else
			std::cout << "Error : bad input => " << line.substr(0, pos) << std::endl;
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
