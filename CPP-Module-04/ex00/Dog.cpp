/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 08:27:22 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 11:16:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Animal.h"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog is Constructed!" << std::endl;
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	type = obj.type;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this == &obj)
		return (*this);
	type = obj.type;
	return (*this);
}

std::string	Dog::getType() const
{
	return (type);
}

void	Dog::makeSound() const
{
	std::cout << "Dog Sound .." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is Destructed!" << std::endl;
}
