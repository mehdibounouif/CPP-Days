#include "Span.h"

Span::Span(unsigned int n) : size(n){}

Span::~Span(){}

Span::Span(const Span &obj)
{
	size = obj.size;
	data = obj.data;
}

Span &Span::operator=(const Span &obj)
{
	if (this == &obj)
		return (*this);
	size = obj.size;
	data = obj.data;
	return (*this);
}
void	Span::addNumber(int n)
{
	if (size <= data.size())
		throw std::exception();
	data.push_back(n);
}

int Span::shortestSpan()
{
	if (data.size() < 2)
		throw std::exception();

	std::vector<int> a = data;
	std::sort(a.begin(), a.end());

	int minSpan = a[1] - a[0];
	for (size_t i = 1; i < a.size() - 1; i++)
	{
		minSpan = std::min(minSpan, a[i + 1] - a[i]);
	}
	return minSpan;
}

int Span::longestSpan()
{
	if (data.size() < 2)
		throw std::exception();

	std::vector<int> a = data;
	std::sort(a.begin(), a.end());
	return (a[a.size() - 1] - a[0]);
}

