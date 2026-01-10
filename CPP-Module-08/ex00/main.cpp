/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 09:47:21 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/10 14:49:12 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

int	main()
{
	std::vector<int> a;

	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);

	try {
		std::vector<int>::iterator it = easyfind(a, 20);
		std::cout << "found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		easyfind(a, 50);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
