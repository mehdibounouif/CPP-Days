/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 02:32:46 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 03:12:18 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_
#define _MATERIASOURCE_

#include "IMateriaSource.h"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria *Materias[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator=(const MateriaSource &obj);
		void	learnMateria(AMateria *materiaToLearn);
		AMateria	*createMateria(std::string const &type);
}

#endif // !_MATERIASOURCE_
