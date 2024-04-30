/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:49:13 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/30 16:53:42 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template < typename T = unsigned int >
class Array
{
	public :

	Array() {
		this->_elements[0] = new T[0];
	};
	Array(unsigned int n) : _n(n){
		_elements = new T[n];
	};
	Array(const Array &src) {
		*this = src;
	};
	~Array() {
		if (this->_elements)
			delete [] this->_elements;
	};

	T &	operator[]( unsigned int index ) const {
		if (index > this->_n - 1)
			throw (Array::OutOfRange());
		return (this->_elements[index]);
	};

	unsigned int size() const{
		return (this->_n);
	};

	Array &	operator=( const Array &rhs ) {
		this->_elements = new T[rhs.size()];
		for (unsigned int i = 0; i < rhs.size(); i++)
			this->_elements[i] = rhs._elements[i];
		return (*this);
	};

	class OutOfRange : public std::exception {
		public :
			virtual const char *what() const throw() {
				return ("Out of range");
			}
	};

	private :

	T				*_elements;
	unsigned int	_n;
};
