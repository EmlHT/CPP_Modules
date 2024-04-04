/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:37:57 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 12:51:44 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 0, 0)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ) : _target(target), AForm(target, 72, 45)
{
	std::cout << "ShrubberyCreationForm parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : _target(src._target), AForm(src)
{
	*this = src;
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs )
{
    std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 45)
		throw AForm::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
    std::cout << "Biiip Bop Bip..." << std::endl;
    if ((int)(rand() % 1) == 0)
        std::cout << _target << " has been robotomized successfully !" << std::endl;
    else
        std::cout << _target << " has FAILED to be robotomized..." << std::endl;
}