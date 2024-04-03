/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:24:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/03 21:00:23 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( ) : _isSigned(false),  _gradeToSign(150), _gradeToExec(150) 
{
}

AForm::AForm( std::string const & name, int const & gradeToSign, int const & gradeToExec ) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	std::cout << "AForm parametric constructor called" << std::endl;
}

AForm::AForm( const AForm &src ) : _name(src._name), _isSigned(false), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	*this = src;
	std::cout << "AForm Copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm & AForm::operator=( const AForm &rhs )
{
    std::cout << "AForm Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs)
{
	if (rhs.getIsSigned() == true)
		os << " form " << rhs.getName() << " ( Signed, grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << " )";
	else
		os << " form " << rhs.getName() << " ( Not signed, grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << " )";
	return os;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool		AForm::getIsSigned() const
{
    return this->_isSigned;
}

int			AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int			AForm::getGradeToExec() const
{
	return this->_gradeToExec;
}

void		AForm::beSigned( const Bureaucrat &pion )
{
	if (this->_isSigned == true)
		throw GradeAlreadySignedException();
	else if (pion.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}
