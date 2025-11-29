/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:47:04 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 19:48:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.h"

Character::Character(){}

Character::Character(std::string const &name)
{
	std::cout << "Character is Constructed!\n";
  for (int i = 0; i <= 3; i++)
    inventory[i] = NULL;
}

Character::Character(const Character &obj)
{
	std::cout << "Character Copy Constructor!\n";
  name = obj.name;
  for (int i = 0; i <= 3; i++)
  {
    if (obj.inventory[i])
      inventory[i] = obj.inventory[i]->clone();
    else
      inventory[i] = NULL;
  }
}

Character &Character::operator=(const Character &obj)
{
	std::cout << "Character Copy Assignement operator!\n";
  if (this == &obj)
    return (*this);
  name = obj.name;
  for (int i = 0; i <= 4; i++)
  {
    if (inventory[i])
    {
      delete inventory[i];
      inventory[i] = NULL;
    }
  }
  for (int i = 0; i <= 3; i++)
  {
    if (obj.inventory[i])
      inventory[i] = obj.inventory[i]->clone();
    else
      inventory[i] = NULL;
  }
}


Character::~Character()
{
	std::cout << "Character is Destructed!\n";
  for (int i = 0; i <= 3; i++)
  {
    if (inventory[i])
      delete inventory[i];
  }
  while (!unequipped.empty())
  {
    delete unequipped.front();
    unequipped.pop_front();
  }
}

void Character::equip(AMateria* m)
{
  for (int i = 0; i <= 3; i++)
    if (i == 4)
    {
      std::cout << "inventory is full!\n";
      return ;
    }
  for (int i = 0; i <= 3; i++)
  {
    if (!inventory[i])
    {
      inventory[i] = m;
      return ;
    }
  }
}

void Character::unequip(int idx)
{
  if (idx > 3 || idx < 0)
    std::cout << "Invalid Idx, must be between (0 => 3)\n";
  else if (!inventory[idx])
    std::cout << "Unexisting slot!\n";
  else
  {
    unequipped.push_front(inventory[idx]);
    inventory[idx] = NULL;
  }
    
}
void Character::use(int idx, ICharacter& target)
{
  if (idx > 3 || idx < 0)
    std::cout << "Invalid Idx, must be between (0 => 3)\n";
  else if (!inventory[idx])
    std::cout << "Unexisting slot!\n";
  else
    inventory[idx]->use(target);
}