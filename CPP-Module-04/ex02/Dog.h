/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:44:48 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 10:34:00 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _DOG_
#define _DOG_

#include "Animal.h"
#include "Brain.h"

class	Dog : public Animal
{
	Brain* brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		void	makeSound() const;
		std::string	getType() const;
		Brain &getBrain();
};

#endif // !
