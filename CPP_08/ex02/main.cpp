/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:52:27 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/02 17:49:19 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Copy :" << std::endl;
    MutantStack<int> s(mstack);
    MutantStack<int>::iterator its = s.begin();
    MutantStack<int>::iterator ites = s.end();

    ++its;
    --its;
    while (its != ites)
    {
        std::cout << *its << std::endl;
        ++its;
    }

    std::cout << std::endl;
    std::cout << "#========LIST========#" << std::endl;
    std::cout << std::endl;

    std::list<int> mlist;
    
    mlist.push_back(5);
    mlist.push_back(17);
    
    std::cout << mlist.back() << std::endl;
    
    mlist.pop_back();

    std::cout << mlist.size() << std::endl;
    
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    std::list<int>::iterator itl = mlist.begin();
    std::list<int>::iterator itel = mlist.end();

    ++itl;
    --itl;
    while (itl != itel)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
    std::cout << "Copy :" << std::endl;
    std::list<int> l(mlist);
    std::list<int>::iterator itls = l.begin();
    std::list<int>::iterator itels = l.end();

    ++its;
    --its;
    while (itls != itels)
    {
        std::cout << *itls << std::endl;
        ++itls;
    }
    return 0;
}