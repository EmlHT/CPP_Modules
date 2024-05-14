/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot < ehouot@student.42nice.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/08 20:53:10 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
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

    void    fillMap() const;
    
    
};
