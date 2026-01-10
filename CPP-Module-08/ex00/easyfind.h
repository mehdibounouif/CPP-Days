/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 09:38:58 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/10 14:49:43 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_
#define _EASYFIND_

#include <algorithm>
#include <iostream>
#include <vector>



template <typename T>
typename T::iterator easyfind(T container, int target)
{
	typename T::iterator it = std::find(container.begin(), container.end(), target);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif
