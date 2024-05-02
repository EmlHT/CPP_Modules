/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:51:22 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/02 14:57:52 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

template < typename T = int, typename Container = std::deque<T> >
class MutantStack : public std::stack< T, Container >
{
    public :

        MutantStack() {};
        MutantStack(const MutantStack &src) {
            *this = src;
        };
        ~MutantStack() {};

        MutantStack &	operator=( const MutantStack &rhs ) {
            if (*this != rhs)
                this->c = rhs.c;
            return (*this);
        };

        typedef typename Container::iterator iterator;

        iterator begin() { 
            return this->c.begin();
        }
		iterator end() {
            return this->c.end();
        }
};

