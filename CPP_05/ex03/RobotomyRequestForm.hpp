/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:15:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 13:04:05 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    public:

	RobotomyRequestForm( std::string const &target );
	RobotomyRequestForm( const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm &	operator=( const RobotomyRequestForm &rhs );

	std::string 	getTarget() const;
	virtual void	execute(Bureaucrat const & executor) const;

	private :

	RobotomyRequestForm( void );

	const std::string	_target;
};

#endif