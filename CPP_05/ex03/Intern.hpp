/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:57:10 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/05 18:03:07 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
    public:

	Intern( void );
	Intern( const Intern &src);
	~Intern();

	Intern &	operator=( const Intern &rhs );

	AForm	*makeForm( const std::string formName, const std::string target );

};

#endif