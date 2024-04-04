/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:28:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/04 12:14:40 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 0, 0)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ) : _target(target), AForm(target, 145, 137)
{
	std::cout << "ShrubberyCreationForm parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : _target(src._target), AForm(src)
{
	*this = src;
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs )
{
    std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 145)
		throw AForm::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
	else
	{	
		std::string     filename = _target + "_shrubbery";
		std::ofstream   ofs(filename.c_str());

		if (ofs.is_open())
		{
			ofs << "                                                         ." << std::endl <<
	"                                              .         ;  " << std::endl <<
	"                 .              .              ;%     ;;   " << std::endl <<
	"                   ,           ,                :;%  %;   " << std::endl <<
	"                    :         ;                   :;%;'     .,   " << std::endl <<
	"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
	"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
	"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl <<
	"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
	"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
	"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
	"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
	"                      `@%:.  :;%.         ;@@%;'   " << std::endl <<
	"                        `@%.  `;@%.      ;@@%;         " << std::endl <<
	"                          `@%%. `@%%    ;@@%;        " << std::endl <<
	"                            ;@%. :@%%  %@@%;       " << std::endl <<
	"                              %@bd%%%bd%%:;     " << std::endl <<
	"                                #@%%%%%:;;" << std::endl <<
	"                                %@@%%%::;" << std::endl <<
	"                                %@@@%(o);  . '         " << std::endl <<
	"                                %@@@o%;:(.,'         " << std::endl <<
	"                            `.. %@@@o%::;         " << std::endl <<
	"                               `)@@@o%::;         " << std::endl <<
	"                                %@@(o)::;        " << std::endl <<
	"                               .%@@@@%::;         " << std::endl <<
	"                               ;%@@@@%::;.          " << std::endl <<
	"                              ;%@@@@%%:;;;. " << std::endl <<
	"                          ...;%@@@@@%%:;;;;,.." << std::endl;
		}
		else
		{
			std::cerr << "Impossible to open the file." << std::endl;
			return;
		}
	}
}
