/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 13:18:11 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/03 14:29:05 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A
{public: virtual ~A(){};};

class B : public A
{};
class C
{};

void castUsingReference(B &a)
{
	try {
		(void)dynamic_cast<C&>(a);
		std::cout << "success!" << std::endl;
	} catch (std::bad_cast &e) {
		std::cout << e.what() << std::endl;
	}
}

void	castUsingPointer(A *a)
{
	if (dynamic_cast<B*>(a))
		std::cout << "success!" << std::endl;
	else
		std::cout << "failed!" << std::endl;
}

int main()
{
	A *a = new B();
	B *b = new B();
	castUsingPointer(a);
	castUsingReference(*b);
}
