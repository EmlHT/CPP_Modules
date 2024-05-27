/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/27 16:06:10 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>

class PmergeMe
{
    private :

    std::deque<int> _deque;
    std::vector<int> _vect;
    PmergeMe( const PmergeMe &src );
    PmergeMe &   operator=( const PmergeMe &rhs );
    
    public :

    PmergeMe();
    ~PmergeMe();

    class Error : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };

};
