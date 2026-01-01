/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:43:04 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/01 19:03:03 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.h"
#include "Data.h"

int	main()
{
	Data a;
	a.name = "mehdi";
	a.nikename = "homie";

	uintptr_t b = Serializer::serialize(&a);
	Data *f = Serializer::deserialize(b);

	std::cout << "b address = " << &b << std::endl;
	std::cout << "a address = " << &a << std::endl;
	std::cout << "f address = " << f << std::endl;
	if (f == &a)
		std::cout << "Sucssusflly!" << std::endl;
	else 
		std::cout << "failed!" << std::endl;

	std::cout << a.name << std::endl;
	std::cout << a.nikename << std::endl;
	std::cout << f->name << std::endl;
	std::cout << f->nikename << std::endl;
}
