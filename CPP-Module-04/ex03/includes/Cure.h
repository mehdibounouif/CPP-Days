/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:56:59 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 03:43:51 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_
#define _CURE_

#include "AMateria.h"

// Forward declaration
class ICharacter;

class Cure : public AMateria
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
