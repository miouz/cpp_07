#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"

template<typename T>
Array<T>::Array(): array_(NULL), size_(0){}

template<typename T>
Array<T>::~Array()
{
	delete[] array_;
}

template<typename T>
Array<T>::Array(unsigned int size): array_(new T[size]), size_(size){}

template<typename T>
Array<T>::Array(const Array& other): array_(new T[other.size()]), size_(other.size()){}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return (*this);
	delete[] this->array_;
	this->size_ = other.size_;
	array_ = new T[size_];
	for (unsigned int i = 0; i < size_; i++)
		array_[i] = other.array_[i];
	return *this;
}

#endif
