/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:18:02 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/05 20:04:42 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>

int main ()
{
    srand (time(NULL));

    try
    {
        Bureaucrat  Pion1 = Bureaucrat("Brett", 1);
        Intern      *Pion2 = new Intern();

        AForm *newForm = Pion2->makeForm("ShrubberyCreationForm", "FOREST");

        std::cout << Pion1;

        if (newForm != NULL)
        {
            Pion1.signForm(*newForm);
            Pion1.executeForm(*newForm);
        }

        delete newForm;
        delete Pion2;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  Pion1 = Bureaucrat("Jeff", 1);
        Bureaucrat  Pion2 = Bureaucrat("Stagiaire", 149);
        Intern      *Pion3 = new Intern();

        PresidentialPardonForm   Form1 = PresidentialPardonForm("Apologize");

        AForm *newForm = Pion3->makeForm("PresidentialPardonForm", "PRESIDENT");

        std::cout << Pion2;
        Pion2.signForm(Form1);
        Pion2.executeForm(Form1);
        if (newForm != NULL)
        {
            Pion2.signForm(*newForm);
            Pion2.executeForm(*newForm);
        }

        std::cout << Pion1;
        Pion1.signForm(Form1);
        Pion1.executeForm(Form1);
        if (newForm != NULL)
        {
            Pion1.signForm(*newForm);
            Pion1.executeForm(*newForm);
        }

        delete newForm;
        delete Pion3;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  Pion1 = Bureaucrat("Elon", 1);
        Bureaucrat  Pion2 = Bureaucrat("Stagiaire", 149);
        Intern      *Pion3 = new Intern();

        RobotomyRequestForm   Form1 = RobotomyRequestForm("Wall-E");

        AForm *newForm = Pion3->makeForm("RobotomyRequestForm", "ROB'S");

        std::cout << Pion2;
        Pion2.signForm(Form1);
        Pion2.executeForm(Form1);
       if (newForm != NULL)
        {
            Pion2.signForm(*newForm);
            Pion2.executeForm(*newForm);
        }

        std::cout << Pion1;
        Pion1.signForm(Form1);
        Pion1.executeForm(Form1);
        if (newForm != NULL)
        {
            Pion1.signForm(*newForm);
            Pion1.executeForm(*newForm);
        }

        delete newForm;
        delete Pion3;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
