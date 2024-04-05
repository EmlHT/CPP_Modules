/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:37:57 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/05 16:40:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 0, 0)
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) : AForm("Robot", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm parametric constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ) : AForm(src), _target(src._target)
{
	*this = src;
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs )
{
    std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 45)
		throw AForm::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
    std::cout << "Biiip Bop Bip..." << std::endl;
    if ((int)(rand() % 100) > 50)
        std::cout << _target << " has been robotomized successfully !" << std::endl;
    else
        std::cout << _target << " has FAILED to be robotomized..." << std::endl;
}