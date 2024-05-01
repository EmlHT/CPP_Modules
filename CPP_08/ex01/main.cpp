/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:03:41 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/01 16:03:40 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.displayVector();
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "Test with errors :" << std::endl;
	Span err1 = Span(2);
	try {
		sp.addNumber(1);
		sp.addNumber(2);		
		sp.addNumber(3);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
