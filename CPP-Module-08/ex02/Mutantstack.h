/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:35:03 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/11 18:35:48 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_
#define _MUTANTSTACK_

#include <stack>
#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    MutantStack& operator=(const MutantStack& other)
    {
        std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end()   { return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }
    const_iterator end()   const { return this->c.end(); }
};
/*
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		MutantStack(const MutantStack &obj): std::stack<T>(obj)
		{}
		MutantStack(const MutantStack &obj)
		{
			std::stack<T>::operator=(obj);
			return (*this);
		}
		~MutantStatck(){}
		typedef	typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		iterator begin() const {return (this->c.begin());}
		iterator end() const {return (this->c.end());}

		const_iterator begin() const {return (this->c.begin());}
		const_iterator end() const {return (this->c.end());}
};
*/
#endif






























