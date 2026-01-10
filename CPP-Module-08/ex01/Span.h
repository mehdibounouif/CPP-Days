/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:54:10 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/10 15:42:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_
#define _SPAN_

#include <iostream>
#include <vector>

class Span
{
	unsigned int size;
	std::vector<int> data;

	public:
		Span(unsigned int n);
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
};


Span::Span(unsigned int n)
{
	size = n;
	data = new int[n];
	for (unsigned int i = 0; i < n; i++)
		data[i] = 0;
}

void	Span::addNumber(int n)
{
	unsigned int i = 0;

	while (data[i] != 0)
		i++;
	
	if (i == size)
		throw std::exception();

	data[i] = n;
}

int Span::shortestSpan()
{
	std::sort(data.begin(), data.end());
	return (data[1] - data[0]);

//	for (int i = 0; i < data.size(); i++)
//		std::cout << data[i] << std::endl;
}

int Span::longestSpan()
{
	std::sort(data.begin(), data.end());
	return (data.end() - data.begin());
//	for (int i = 0; i < data.size(); i++)
//		std::cout << data[i] << std::endl;
}

#endif
