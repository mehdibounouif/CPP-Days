/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 08:19:47 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 10:46:55 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"
#include "Brain.h"

Cat::Cat() : Animal()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat is Constructed!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	brain = new Brain(*obj.brain);
	type = obj.type;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this == &obj)
		return (*this);
	brain = new Brain(*obj.brain);
	type = obj.type;
	return (*this);
}

Brain	&Cat::getBrain()
{
	return (*brain);
}

std::string	Cat::getType() const
{
	return (type);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound .." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat is Destructed!" << std::endl;
}
