/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:18:03 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/02 15:28:08 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    public:

	Form(std::string const & name, int const & range);
	Form( const Form &src);
	virtual ~Form( void );

	Form &	operator=( const Form &rhs );

	std::string getName() const;
    bool        getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	void		beSigned( Bureaucrat pion );
	
	private :
    
	Form( void );
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("Problem, too high range.");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("Problem, too low range.");
			}
	};
    
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExec;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif