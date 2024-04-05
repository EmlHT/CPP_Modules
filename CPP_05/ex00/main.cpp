/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:18:02 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/05 20:05:16 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat Pion1 = Bureaucrat("Brett", 150);

        std::cout << Pion1;
        Pion1.decreaseGrade();
        std::cout << Pion1;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat Pion2 = Bureaucrat("Max", 0);

        std::cout << Pion2;
        Pion2.decreaseGrade();
        std::cout << Pion2;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat Pion1 = Bureaucrat("Hanmin", 15);

        std::cout << Pion1;
        Pion1.increaseGrade();
        std::cout << Pion1;
        Pion1.increaseGrade();
        std::cout << Pion1;
        Pion1.decreaseGrade();
        std::cout << Pion1;
        Pion1.decreaseGrade();
        std::cout << Pion1;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
