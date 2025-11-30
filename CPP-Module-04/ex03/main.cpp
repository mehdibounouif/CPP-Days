/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:58:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 05:32:19 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/IMateriaSource.h"
#include "includes/MateriaSource.h"     // ADD THIS - concrete class
#include "includes/ICharacter.h"
#include "includes/Character.h"         // ADD THIS - concrete class
#include "includes/AMateria.h"
#include "includes/Ice.h"
#include "includes/Cure.h"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return (0);
}
