/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:02:06 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 15:05:36 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val ) : _value(val << _constValue)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float val ) : _value(static_cast<int>(roundf(val * (1 << _constValue))))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &src ) : _value(src._value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( const Fixed &rhs )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return os;
}

int		Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> _constValue);
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(_value) / (1 << this->_constValue));
}

bool	Fixed::operator>( const Fixed& rhs ) const
{
	if (this->_value > rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator<( const Fixed& rhs ) const
{
	if (this->_value < rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=( const Fixed& rhs ) const
{
	if (this->_value >= rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=( const Fixed& rhs ) const
{
	if (this->_value <= rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator==( const Fixed& rhs ) const
{
	if (this->_value == rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=( const Fixed& rhs ) const
{
	if (this->_value != rhs._value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+( const Fixed &rhs ) const
{
	float	a = this->toFloat();
	float	b = rhs.toFloat();
	Fixed	result = (a + b);
	return (result);
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	if (rhs._value == 0)
	{
		std::cout << "Division by 0 impossible" << std::endl;
		return 0;
	}
	float	a = this->toFloat();
	float	b = rhs.toFloat();
	Fixed	result = (a / b);
	return (result);
}

Fixed	Fixed::operator-( const Fixed &rhs ) const
{
	float	a = this->toFloat();
	float	b = rhs.toFloat();
	Fixed	result = (a - b);
	return (result);
}

Fixed	Fixed::operator*( const Fixed &rhs ) const
{
	float	a = this->toFloat();
	float	b = rhs.toFloat();
	Fixed	result = (a * b);
	return (result);
}

Fixed&	Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed& 	Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	before(*this);
	++(*this);
	return (before);
}

Fixed	Fixed::operator--(int)
{
	Fixed	before(*this);
	--(*this);
	return (before);
}

Fixed	Fixed::min( Fixed& a, Fixed& b )
{
	if (a == b)
	{
		std::cout << "They are equals" << std::endl;
		return (a);
	}
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed const	Fixed::min( const Fixed& a, const Fixed& b )
{
	if (a == b)
	{
		std::cout << "They are equals" << std::endl;
		return (a);
	}
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed	Fixed::max( Fixed& a, Fixed& b )
{
	if (a == b)
	{
		std::cout << "They are equals" << std::endl;
		return (a);
	}
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const	Fixed::max( const Fixed& a, const Fixed& b )
{
	if (a == b)
	{
		std::cout << "They are equals" << std::endl;
		return (a);
	}
	if (a > b)
		return (a);
	else
		return (b);
}

const int	Fixed::_constValue = 8;