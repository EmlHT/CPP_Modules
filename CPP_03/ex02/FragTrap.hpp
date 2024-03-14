/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:35:41 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/14 13:36:25 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    
    public :

	FragTrap( void );
	FragTrap( std::string name);
	FragTrap( const FragTrap &src);
	~FragTrap( void );

	FragTrap &	operator=( const FragTrap &rhs );

	void	guardGate();

};

#endif