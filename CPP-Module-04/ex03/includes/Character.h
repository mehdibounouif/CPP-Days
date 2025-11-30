/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:41:19 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 03:44:34 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_
#define _CHARACTER_

#include "ICharacter.h"
#include "AMateria.h"
#include <list>

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		std::list<AMateria*> unequipped;
	public:
		Character();
		Character(std::string const &name);
		~Character();
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // !_CHARACTER_
