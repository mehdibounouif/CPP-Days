/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 08:19:47 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 09:05:00 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"

Cat::Cat() : Animal()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat is Constructed!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	type = obj.type;
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
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

