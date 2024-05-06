/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/06 18:19:54 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <algorithm>

class BitcoinExchange
{
    public :

    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange( const BitcoinExchange &src );

    BitcoinExchange &   operator=( const BitcoinExchange &rhs );

    void    fillMap(std::ofstream file);
    
    private :

    std::map<std::string, double> _map;
    
};
