/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:56:59 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 04:19:31 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_
#define _CURE_

#include "AMateria.h"
#include "ICharacter.h"

class	Cure : AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &obj);
		Cure &operator=(const Cure &obj);
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif // !_CURE_
