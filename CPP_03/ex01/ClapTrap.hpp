/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:39:18 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/13 12:45:33 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {
    
	public :

	struct GlobalInfo {
        std::string name;
        int			health;
        int			energy;
        int			attack;
    };

	ClapTrap( void );
	ClapTrap( std::string name);
	ClapTrap( const ClapTrap &src);
	~ClapTrap( void );

	ClapTrap &	operator=( const ClapTrap &rhs );

	GlobalInfo	getGlobal( void ) const;
	void		setEnergy( int energy );
	void		setAttack( int attack );
	void		setHealth( int health );
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private :
    
	std::string _name;
	int			_health;
	int			_energy;
	int			_attack;

};

#endif