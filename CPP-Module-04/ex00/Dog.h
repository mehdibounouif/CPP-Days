/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:44:48 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 08:39:47 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _DOG_
#define _DOG_

#include "Animal.h"

class	Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		void	makeSound() const;
		std::string	getType() const;
};

#endif // !
