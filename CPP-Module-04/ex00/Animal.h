/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:42:00 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/24 16:42:01 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal &operator=(const Animal &obj);
		Animal(const Animal &obj);
};

#endif
