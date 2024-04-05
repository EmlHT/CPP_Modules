/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:18:03 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 12:10:09 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:

	AForm( std::string const & name, int const & gradeToSign, int const & gradeToExec );
	AForm( const AForm &src);
	virtual ~AForm( void );

	AForm &	operator=( const AForm &rhs );

	std::string 	getName() const;
    bool        	getIsSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExec() const;
	void			beSigned( const Bureaucrat &pion );
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};
	class GradeAlreadySignedException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};
	class NotSignedException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	private :
    
	AForm( void );

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExec;
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);

#endif