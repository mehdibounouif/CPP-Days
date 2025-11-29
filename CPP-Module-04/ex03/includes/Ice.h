/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:59:18 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 03:00:18 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ICE_
#define _ICE_

#include "AMateria.h"
#include "ICharacter.h"

class	Ice
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
