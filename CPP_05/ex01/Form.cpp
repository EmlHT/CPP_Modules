/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:24:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/02 15:40:19 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ){
}

Form::Form( std::string const & name, int const & range ) : _name(name), _range(range)
{
	if (range > 150)
		throw GradeTooLowException();
	else if (range < 1)
		throw GradeTooHighException();
	std::cout << "Form parametric constructor called" << std::endl;
}

Form::Form( const Form &src )
{
	*this = src;
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=( const Form &rhs )
{
    std::cout << "Form Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& rhs)
{
	if (rhs.getIsSigned() == true)
		os << " form " << rhs.getName() << "( Signed, grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << " )." << std::endl;
	else
		os << " form " << rhs.getName() << "( Not signed, grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << " )." << std::endl;
	return os;
}

std::string Form::getName() const
{
    return this->_name;
}

bool		Form::getIsSigned() const
{
    return this->_isSigned;
}

int			Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int			Form::getGradeToExec() const
{
	return this->_gradeToExec;
}
