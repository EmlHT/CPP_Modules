/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:45:07 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/02 10:59:44 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ){
}

Bureaucrat::Bureaucrat( std::string const & name, int const & range ) : _name(name), _range(range)
{
	if (range > 150)
		throw GradeTooLowException();
	else if (range < 1)
		throw GradeTooHighException();
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &src )
{
	*this = src;
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &rhs )
{
    std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return os;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int		Bureaucrat::getGrade() const
{
    return this->_range;
}

void		Bureaucrat::decreaseGrade( void )
{
	if (this->_range + 1 > 150)
		throw GradeTooLowException();
	else
		this->_range++;
	std::cout << "Range decreased for the Bureaucrat " << _name << std::endl;
}

void		Bureaucrat::increaseGrade( void )
{
	if (this->_range - 1 < 1)
		throw GradeTooHighException();
	else
		this->_range--;
	std::cout << "Range increased for the Bureaucrat " << _name << std::endl;
}
