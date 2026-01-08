/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:43:04 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/03 14:48:45 by mbounoui         ###   ########.fr       */
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

	if (f == &a)
		std::cout << "Sucssusflly!" << std::endl;
	else 
		std::cout << "failed!" << std::endl;
}
