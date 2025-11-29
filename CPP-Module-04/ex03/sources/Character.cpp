/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:47:04 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 04:03:03 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.h"

Character::Character()
{
	std::cout << "Character is Constructed!\n";
}

Character::Character(const Character &obj)
{
	std::cout << "Character Copy Constructor!\n";
}

Character &Character::operator=(const Character &obj)
{
	std::cout << "Character Copy Assignement operator!\n";
}

Character::~Character()
{
	std::cout << "Character is Destructed!\n";
}
