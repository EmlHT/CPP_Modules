/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:08:26 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/29 18:12:25 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ifstream ifs;
    BitcoinExchange map1;
    ifs.open(argv[1], std::ifstream::in);
    if (argc == 2 && ifs.is_open())
    {
        map1.fillMap();
        map1.treatInput(ifs);
        ifs.close();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    // map1.displayMap();
    return 0;
}
