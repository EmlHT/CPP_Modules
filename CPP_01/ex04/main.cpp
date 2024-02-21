/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:58:32 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/21 16:54:15 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		ofilename = filename + ".replace";
	std::ifstream	ifs(filename.c_str());
	std::ofstream 	ofs(ofilename.c_str());
	if (ifs.is_open() && ofs.is_open())
	{
		std::string content;
		std::getline(ifs, content);
		// while (std::getline(content))
		std::string::size_type val;
		while (val = content.find(s1, s2))
		{
			content.erase(val, s1.length());
			content.insert(val, s2);
		}
		ofs << content;
        ifs.close();
		ofs.close();
    }
	else
        std::cerr << "Impossible d'ouvrir le fichier." << std::endl;
}
