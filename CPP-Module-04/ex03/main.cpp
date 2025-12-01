/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:58:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/01 03:14:46 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/IMateriaSource.h"
#include "includes/MateriaSource.h"
#include "includes/ICharacter.h"
#include "includes/Character.h"
#include "includes/AMateria.h"
#include "includes/Ice.h"
#include "includes/Cure.h"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

//	AMateria *ice = src->createMateria("ice");
//	AMateria *cure = src->createMateria("cure");
//	std::cout << ice->getType() << std::endl;
//	std::cout << cure->getType() << std::endl;
//	delete ice;
//	delete cure;
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return (0);
}
