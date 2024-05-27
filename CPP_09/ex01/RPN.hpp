/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:40:12 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/27 14:25:57 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stack>
#include <algorithm>

class RPN
{
    private :

    std::stack<int> _stack;
    RPN( const RPN &src );
    RPN &   operator=( const RPN &rhs );
    
    public :

    RPN();
    ~RPN();

    void parseInput(std::string &input);
    void fillStack(std::string &input);
    void calculation(char sign);

    class Error : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };

};
