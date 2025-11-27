/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:53:46 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 08:59:26 by mbounoui         ###   ########.fr       */
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
