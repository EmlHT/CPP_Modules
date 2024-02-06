/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:49:18 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/05 19:13:52 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

static int	getNbAccounts( void ) {

    return (_nbAccounts)
    
}

static int	getTotalAmount( void );
static int	getNbDeposits( void );
static int	getNbWithdrawals( void );
static void	displayAccountsInfos( void );

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;

static void	_displayTimestamp( void );

Account::Account (void)
{
    std::cout << "Constructeur called" << std::endl;
    getNbAccounts();
    return ;
}

Account::Account( int initial_deposit )
{
	std::cout << "Constructeur initialized called" << std::endl;
    _nbDeposits = 1;
    _amount = initial_deposit;
    return ;
}

Account::~Account (void)
{
    std::cout << "Destructeur called" << std::endl;
    return ;
}


