/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:03:41 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/02 15:07:22 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>

int main()
{
	srand(time(NULL));
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.displayVector();
	
	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl;

	std::cout << "Test with errors :" << std::endl;
	Span err1 = Span(2);
	try {
		sp.addNumber(1);
		sp.addNumber(2);		
		sp.addNumber(3);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test with moreNumbers function :" << std::endl;
	Span mrr1 = Span(10);
	std::vector<int> newNumbers;

	for (int i = 0; i < 10; i++){
		newNumbers.push_back(rand() % 100);
	}
	try {
		mrr1.moreNumbers(newNumbers, 0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	mrr1.displayVector();
	try {
		std::cout << "Shortest span : " << mrr1.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << mrr1.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
