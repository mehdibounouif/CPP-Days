/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:59:18 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 03:43:18 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef _ICE_
#define _ICE_

#include "AMateria.h"

// Forward declaration
class ICharacter;

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif // !_ICE_
