/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:40:26 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/27 10:44:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_
#define	_BRAIN_

#include <iostream>

class	Brain
{
	std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		Brain& operator=(const Brain &obj);
		std::string geter(int index) const;
		void	seter(int index, const std::string &value);
		~Brain();
};

#endif // !_BRAIN_
