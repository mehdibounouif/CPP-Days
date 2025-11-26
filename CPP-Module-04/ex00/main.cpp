/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:36:23 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 11:28:40 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"


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
