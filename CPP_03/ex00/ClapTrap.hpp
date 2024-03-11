/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:39:18 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/11 20:16:02 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

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
    
	std::string _name;		//Name, which is passed as parameter to a constructor
	int			_health;	//Hit points (10), represent the health of the ClapTrap
	int			_energy;	//Energy points (10)
	int			_attack;	//Attack damage (0)

};

#endif