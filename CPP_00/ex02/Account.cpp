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
#include <ctime>

int	Account::getNbAccounts( void ) {

    return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {

    return (_totalAmount);
}

int	Account::getNbDeposits( void ) {

    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp( void ) {

    std::cout << "[" << localtime(0) << "]" << std::endl;
}

void	Account::displayAccountsInfos( void ) {

    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
// int		checkAmount( void ) const;
// void	displayStatus( void ) const;


Account::Account (void)
{
    std::cout << "Constructeur called" << std::endl;
    getNbAccounts();
    return ;
}

Account::Account( int initial_deposit )
{
	std::cout << "index:0;amount:42;created" << std::endl;
    Account::_nbDeposits = 1;
    _amount = initial_deposit;
    return ;
}

Account::~Account (void)
{
    std::cout << "Destructeur called" << std::endl;
    return ;
}


