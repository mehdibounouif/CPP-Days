/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 08:19:47 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 11:27:43 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"

Cat::Cat() : Animal()

{
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
	std::cout << "Cat is Destructed!" << std::endl;
}

