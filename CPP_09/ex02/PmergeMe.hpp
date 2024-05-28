/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/28 15:19:18 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <deque>
#include <vector>
#include <cctype>
#include <algorithm>

class PmergeMe
{
    private :

    std::deque<unsigned int> _deque;
    std::vector<unsigned int> _vect;
    PmergeMe( const PmergeMe &src );
    PmergeMe &   operator=( const PmergeMe &rhs );
    
    public :

    PmergeMe();
    ~PmergeMe();

    unsigned int    charToUInt(const char *str);
    void            parseInput(char **argv);
    void            sortAndDisplay(void);

    template <typename Type> 
    float            sortFordJohnson(Type &container);
    
    class Error : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };

};
