/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:59:02 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/05 20:02:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
		std::cout << "Intern parametric constructor called" << std::endl;

}

Intern::Intern( const Intern &src )
{
	*this = src;
	std::cout << "Intern Copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=( const Intern &rhs )
{
    // std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

static AForm	*makePresident( const std::string target )
{ 
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot( const std::string target )
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShrub( const std::string target )
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm( const std::string formName, const std::string target )
{
	int i = 0;
	std::string form_list[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	for (i = 0; i < 3; i++)
	{
		if (form_list[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			break ;
		}
	}
    switch (i)
	{
		case 0:
			return makePresident(target);
			break;
		case 1:
			return makeRobot(target);
			break;
		case 2:
			return makeShrub(target);
			break;
		default:
			std::cout << "Intern doesn't know that type of form." << std::endl;
	}
	return (NULL);
}
