/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:54:10 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/11 18:21:33 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_
#define _SPAN_

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	unsigned int size;
	std::vector<int> data;

	public:
		Span(unsigned int n);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
};

#endif
