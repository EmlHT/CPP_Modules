/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/14 16:15:45 by ehouot           ###   ########.fr       */
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
    
    public :

    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange( const BitcoinExchange &src );

    BitcoinExchange &   operator=( const BitcoinExchange &rhs );

    void    fillMap();
    void    treatInput(std::ifstream &ifs);
    void	displayMap( void ) const;
};
