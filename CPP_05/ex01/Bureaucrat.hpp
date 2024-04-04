/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:20:59 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 10:31:53 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    public:

	Bureaucrat(std::string const & name, int const & range);
	Bureaucrat( const Bureaucrat &src);
	~Bureaucrat( void );

	Bureaucrat &	operator=( const Bureaucrat &rhs );

	std::string getName() const;
	int			getGrade() const;
	void		decreaseGrade( void );
	void		increaseGrade( void );
	void		signForm( Form &form );
	
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

	private :
    
	Bureaucrat( void );
	const std::string	_name;
	int					_range;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif