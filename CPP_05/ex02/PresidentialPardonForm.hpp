/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 08:54:58 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 13:05:39 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    public:

	PresidentialPardonForm( std::string const &target );
	PresidentialPardonForm( const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm &	operator=( const PresidentialPardonForm &rhs );

	std::string 	getTarget() const;
	virtual void	execute(Bureaucrat const & executor) const;

	private :

	PresidentialPardonForm( void );

	const std::string	_target;
};

#endif