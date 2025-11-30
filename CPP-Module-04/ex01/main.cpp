/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:36:23 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 18:37:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
  const Animal c;

	std::cout << "\n======================\n";
	/*=======================*/
	/*Test virtual destructor*/
	/*=======================*/

	Animal	*animal[10];
	int	l = 0;
	while (l < 5)
		animal[l++] = new Dog();
	while (l < 10)
		animal[l++] = new Cat();
	for (int i = 0; i < 10; i++)
		delete animal[i];

	std::cout << "\n======================\n";
	/*=======================*/
	/*====Test Deep copy=====*/
	/*=======================*/
	
	Dog a;
	a.getBrain().seter(0, "mehdi");

	Dog b = a;

	std::cout << a.getBrain().geter(0) << std::endl;
	
	a.getBrain().seter(0, "bounouif");
	std::cout << b.getBrain().geter(0) << std::endl;
	std::cout << a.getBrain().geter(0) << std::endl;

	return 0;
}
