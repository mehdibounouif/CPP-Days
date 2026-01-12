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
    MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator=(const MutantStack& other);
    ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end()   const;
};

template <typename T>
MutantStack<T>::MutantStack(){}

template <typename T>
MutantStack<T>::~MutantStack(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj): std::stack<T>(obj)
{}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
	std::stack<T>::operator=(obj);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){return (this->c.begin());}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){return (this->c.end());}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const{return (this->c.begin());}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const{return (this->c.end());}





























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






























