/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:11:30 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 18:50:19 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

	MutantStack( void ) : std::stack<T>() {};
	MutantStack( MutantStack const &src ) : std::stack<T>(src) {};
	MutantStack &operator=( MutantStack const &src )
	{
		std::stack<T>::operator=(src); 
		return *this;
	};
	~MutantStack( void ) {};
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin() { return std::stack<T>::c.begin(); };
	iterator end() { return std::stack<T>::c.end(); };
	const_iterator begin() const { return std::stack<T>::c.begin(); };
	const_iterator end() const { return std::stack<T>::c.end(); };
	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); };
	reverse_iterator rend() { return std::stack<T>::c.rend(); };
};

#endif