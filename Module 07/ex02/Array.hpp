/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:45:20 by mgeisler          #+#    #+#             */
/*   Updated: 2025/02/05 14:25:54 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
private:
	T *_array;
	unsigned int _asize;
public:
	Array<T>()
	{
		_array = new T[0];
		_asize = 0;
	};

	Array<T>(unsigned int n) : _array(new T[n]), _asize(n) {};
	
	Array(const Array &src) {
		_array = new T[src._asize];
		_asize = src._asize;
        for(unsigned int i = 0; i < _asize; i++)
           _array[i] = src._array[i];
    }

	virtual ~Array<T>()
	{
		delete[] _array;
	};

	Array<T> &operator = (const Array &rhs)
	{
		if(this != &rhs)
		{
			delete[] _array;
			_asize = rhs._asize;
			_array = new T[_asize];
			for(unsigned int i = 0; i < _asize; i++)
				_array[i] = rhs._array[i];
		}
		return (*this);
	};

	T &operator [] (unsigned int index)
	{
		if(index >= _asize)
			throw std::exception();
		return (_array[index]);
	};
	
	const T &operator [] (unsigned int index) const
	{
		if(index >= _asize)
			throw std::exception();
		return (_array[index]);
	};
	
	unsigned int size(void) const
	{
		return (_asize);
	};
};

#endif
