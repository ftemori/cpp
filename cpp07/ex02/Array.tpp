#ifndef	ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
size_t	Array<T>::size( void ) const {
	return _size;
}

template<typename T>
const T	&Array<T>::operator[]( size_t index ) const {
	if ( index >= _size )
		throw std::out_of_range("Index out of bounds!");
	return _array[index];
}

template<typename T>
T	&Array<T>::operator[]( size_t index ) {
	if ( index >= _size )
	throw std::out_of_range("Index out of bounds!");
	return _array[index];
}

template<typename T>
Array<T>	&Array<T>::operator=( const Array &other ) {
	if (this != &other) {
		_size = other._size;
		for (int i = 0; i < _size; i++) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template<typename T>
Array<T>::Array( void ) : _array(0), _size(0) {}

template<typename T>
Array<T>::Array( size_t n ) : _array(new T[n]()), _size(n) {}

template<typename T>
Array<T>::Array( const Array &other ) : _array(new T[other._size]()), _size(other._size) {
	for (size_t i = 0; i < _size; i++) {
		_array[i] = other._array[i];
	}
}

template<typename T>
Array<T>::~Array( void ) {
	delete[] _array;
}

#endif