/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:20:59 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 16:06:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    public:

	Bureaucrat(std::string const & name);
    Bureaucrat( void );
	Bureaucrat( const Bureaucrat &src);
	virtual ~Bureaucrat( void );

	Bureaucrat &	operator=( const Bureaucrat &rhs );

	std::string getName() const;
	int			getGrade() const;

	private :

	const std::string	_name;
	int					_range;
};

#endif