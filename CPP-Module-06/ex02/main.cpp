/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:29:33 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/03 14:30:33 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base *generate(void)
{
	int a = std::rand() % 3;
	if (a == 0)
	{
		std::cout << "A generated!" << std::endl;
		return (new A());
	}
	else if (a == 1)
	{
		std::cout << "B generated!" << std::endl;
		return (new B());
	}
	else 
	{
		std::cout << "C generated!" << std::endl;
		return (new C());
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (...) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (...) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (...) {}
}


int	main()
{
	std::srand(std::time(NULL));
	Base *a = generate();
	
	identify(*a);
	identify(a);

	delete a;
}
