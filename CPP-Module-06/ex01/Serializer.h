/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:32:28 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/03 12:50:37 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_
#define _SERIALIZER_

#include <iostream>
#include <stdint.h>
#include "Data.h"


class	Serializer
{
	Serializer();
	~Serializer();
	Serializer &operator=(const Serializer &obj);
	Serializer(const Serializer &obj);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
