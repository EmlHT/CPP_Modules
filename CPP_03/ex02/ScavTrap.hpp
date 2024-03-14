/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:19:27 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/14 10:13:49 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
    public :

	ScavTrap( void );
	ScavTrap( std::string name);
	ScavTrap( const ScavTrap &src);
	~ScavTrap( void );

	ScavTrap &	operator=( const ScavTrap &rhs );

	void	guardGate();

};

#endif