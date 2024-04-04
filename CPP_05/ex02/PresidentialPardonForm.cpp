/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:15:16 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 18:17:27 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 0, 0)
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ) : _target(target), AForm(target, 25, 5)
{
	std::cout << "PresidentialPardonForm parametric constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src ) : _target(src._target), AForm(src)
{
	*this = src;
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs )
{
    std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 5)
		throw AForm::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}