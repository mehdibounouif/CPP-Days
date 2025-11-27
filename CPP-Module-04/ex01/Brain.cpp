/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:53:46 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 11:16:16 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain is Constructed!" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

void	Brain::seter(int index, const std::string& value)
{
	if (index < 0 || index > 100)
		std::cout << "Index out of range\n" << std::endl;
	else
		ideas[index] = value;
}

std::string	Brain::geter(int index) const
{
	if (index < 0 || index > 100)
		return ("index out of range\n");
	else
		return (ideas[index]);
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this == &obj)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain is Destructed!" << std::endl;
}
