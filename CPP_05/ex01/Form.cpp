/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:24:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/03 19:49:37 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( ) : _isSigned(false),  _gradeToSign(150), _gradeToExec(150) 
{
}

Form::Form( std::string const & name, int const & gradeToSign, int const & gradeToExec ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	std::cout << "Form parametric constructor called" << std::endl;
}

Form::Form( const Form &src ) : _name(src._name), _isSigned(false), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
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
		os << " form " << rhs.getName() << " ( Signed, grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << " )";
	else
		os << " form " << rhs.getName() << " ( Not signed, grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << " )";
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


void		Form::beSigned( const Bureaucrat &pion )
{
	if (this->_isSigned == true)
		throw GradeAlreadySignedException();
	else if (pion.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}
