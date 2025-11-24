/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:32:56 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/23 14:08:24 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " Construct called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	this->_hitPoints = obj._hitPoints;
	this->_name = obj._name;
	return (*this);
}

FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap " << _name
		<< " Copy Constructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " hello guys, high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << "FragTrap " << _name << " Cannot attack (no hit points)!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "FragTrap " << _name << " Cannot attack (no energy points)!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " viciously unprovoked attack" 
			<< target << ", causing " << _attackDamage
			<< " points of damage!\n";
	}
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor called!" << std::endl;
}
