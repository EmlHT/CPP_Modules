/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot < ehouot@student.42nice.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:08:26 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/08 20:34:55 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ifstream ifs;
    ifs.open(argv[1], std::ifstream::in);
    if (argc == 2 && ifs.is_open())
    {
        BitcoinExchange map1;
        map1.fillMap();
        ifs.close();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}
