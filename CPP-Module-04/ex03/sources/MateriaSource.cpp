/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 04:33:06 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/01 03:10:40 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.h"
#include "../includes/AMateria.h"

MateriaSource::MateriaSource()
{
//	std::cout << "MateriaSource is constructed!\n";
	for (int i = 0; i <= 3; i++)
		materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
//	std::cout << "MateriaSource is destructed!\n";
	for (int i = 0; i <= 3; i++)
		if (materias[i])
			delete materias[i];
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
//	std::cout << "MateriaSource copy constructor!\n";
	for (int i = 0; i <= 3; i++)
	{
		if (obj.materias[i])
			materias[i] = obj.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
//	std::cout << "MateriaSource copy assignment operator!\n";
	if (this == &obj)
		return (*this);
	
	for (int i = 0; i <= 3; i++)
	{
		if (materias[i])
		{
			delete materias[i];
			materias[i] = NULL;
		}
	}
	
	for (int i = 0; i <= 3; i++)
	{
		if (obj.materias[i])
			materias[i] = obj.materias[i]->clone();
		else
			materias[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materiaToLearn)
{
	if (!materiaToLearn)
		return;
	
	int i = 0;
	while (i <= 3 && materias[i])
		i++;
	
	if (i == 4)
		std::cout << "MateriaSource already learned 4 materias\n";
	else
		materias[i] = materiaToLearn;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i <= 3; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (NULL);
}
