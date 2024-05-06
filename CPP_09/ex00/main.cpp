/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:08:26 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/06 16:24:14 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ofstream ofs;
    ofs.open(argv[1], std::ofstream::in);
    if (argc == 2 && ofs.is_open())
    {
        
        ofs.close();
    }
    else
        std::cout << "Error: could not open file." << std::endl;
    return 0;
}
