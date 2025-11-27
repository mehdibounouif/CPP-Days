/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:36:23 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 17:42:01 by mbounoui         ###   ########.fr       */
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

/*
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	

	std::cout << "\n============================\n";
	std::cout << "=== Wrong emplementation ===\n";
	std::cout << "============================\n";

	const	WrongAnimal* w_Animal = new WrongAnimal();
	const	WrongAnimal* w_cat = new WrongCat();

	std::cout << w_Animal->getType() << std::endl;
	std::cout << w_cat->getType() << std::endl;
	w_Animal->makeSound();
	w_cat->makeSound();

	delete w_Animal;
	delete w_cat;

	return 0;
}
*/
