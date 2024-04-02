/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:20:59 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/02 11:50:38 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    public:

	Bureaucrat(std::string const & name, int const & range);
	Bureaucrat( const Bureaucrat &src);
	virtual ~Bureaucrat( void );

	Bureaucrat &	operator=( const Bureaucrat &rhs );
	Bureaucrat &	operator<<( const Bureaucrat &rhs );

	std::string getName() const;
	int			getGrade() const;
	void		decreaseGrade( void );
	void		increaseGrade( void );
	
	private :
    
	Bureaucrat( void );
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
	int					_range;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif