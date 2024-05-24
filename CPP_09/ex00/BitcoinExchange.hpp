/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/24 12:06:31 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

class BitcoinExchange
{
    private :

    std::map<std::string, double> _map;
    BitcoinExchange( const BitcoinExchange &src );
    BitcoinExchange &   operator=( const BitcoinExchange &rhs );
    
    public :

    BitcoinExchange();
    ~BitcoinExchange();

    void    fillMap();
    void    treatInput(std::ifstream &ifs);
    void	displayMap( void ) const;
    int     parseDate(std::string date) const;
    double	findDate(std::string date) const;
};
