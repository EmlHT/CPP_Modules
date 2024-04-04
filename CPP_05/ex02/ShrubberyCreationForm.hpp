/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:32:22 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 12:14:31 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    public:

	ShrubberyCreationForm( std::string const &target );
	ShrubberyCreationForm( const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm( void );

	ShrubberyCreationForm &	operator=( const ShrubberyCreationForm &rhs );

	std::string 	getTarget() const;
	virtual void	execute(Bureaucrat const & executor) const;

	private :
    
	ShrubberyCreationForm( void );

	const std::string	_target;
};

#endif