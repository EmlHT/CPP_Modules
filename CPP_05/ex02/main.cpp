/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:18:02 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/05 16:31:18 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int main ()
{
    srand (time(NULL));

    try
    {
        Bureaucrat  Pion1 = Bureaucrat("Brett", 1);
        Bureaucrat  Pion2 = Bureaucrat("Stagiaire", 149);

        ShrubberyCreationForm   Form1 = ShrubberyCreationForm("Tree");

        std::cout << Pion2;
        Pion2.signForm(Form1);
        Pion2.executeForm(Form1);

        std::cout << Pion1;
        Pion1.signForm(Form1);
        Pion1.executeForm(Form1);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  Pion1 = Bureaucrat("Jeff", 1);
        Bureaucrat  Pion2 = Bureaucrat("Stagiaire", 149);

        PresidentialPardonForm   Form1 = PresidentialPardonForm("Apologize");

        std::cout << Pion2;
        Pion2.signForm(Form1);
        Pion2.executeForm(Form1);

        std::cout << Pion1;
        Pion1.signForm(Form1);
        Pion1.executeForm(Form1);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  Pion1 = Bureaucrat("Elon", 1);
        Bureaucrat  Pion2 = Bureaucrat("Stagiaire", 149);

        RobotomyRequestForm   Form1 = RobotomyRequestForm("Wall-E");

        std::cout << Pion2;
        Pion2.signForm(Form1);
        Pion2.executeForm(Form1);

        std::cout << Pion1;
        Pion1.signForm(Form1);
        Pion1.executeForm(Form1);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
