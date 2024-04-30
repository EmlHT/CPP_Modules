/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:09:22 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/18 16:39:50 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data *data = new Data;
	uintptr_t serialized;
	Data *deserialized;
	defineData(data);
	std::cout << "START :" << std::endl;
	std::cout << "val1 : " << data->val1 << std::endl;
	std::cout << "val2 : " << data->val2 << std::endl;
	std::cout << "val3 : " << data->val3 << std::endl;
	
	serialized = Serializer::serialize(data);
	std::cout << "SERIALIZATION" << std::endl;
	std::cout << serialized << std::endl;
	
	deserialized = Serializer::deserialize(serialized);
	std::cout << "DESERIALIZATION" << std::endl;
	std::cout << "val1 : " << deserialized->val1 << std::endl;
	std::cout << "val2 : " << deserialized->val2 << std::endl;
	std::cout << "val3 : " << deserialized->val3 << std::endl;

	delete data;
	return 0;
}