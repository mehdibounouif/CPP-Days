/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:42:00 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 17:39:36 by mbounoui         ###   ########.fr       */
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
		virtual ~Animal();
		Animal &operator=(const Animal &obj);
		Animal(const Animal &obj);
		virtual void	makeSound() const = 0;
		std::string getType() const;
};
#endif
