/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:21:33 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 11:30:09 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_
#define _WRONGANIMAL_

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &obj);
		WrongAnimal(const WrongAnimal &obj);
		virtual void	makeSound() const;
		std::string getType() const;
};


#endif
