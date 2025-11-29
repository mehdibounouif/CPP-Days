/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:41:19 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 03:01:22 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_
#define _CHARACTER_

#include "ICharacter.h"
#include "AMateria.h"

class	Character: public ICharacter
{
	public:
		Character();
		~Character();
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // !_CHARACTER_

