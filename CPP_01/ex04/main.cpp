/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:58:32 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/23 13:46:57 by ehouot           ###   ########.fr       */
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
		std::string line;
		while (std::getline(ifs, line))
		{
			std::string::size_type pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.length();
			}
			content += line + '\n';
		}
		ofs << content;
        ifs.close();
		ofs.close();
    }
	else
	{
        std::cerr << "Impossible d'ouvrir le fichier." << std::endl;
		return (1);
	}
	return (0);
}
