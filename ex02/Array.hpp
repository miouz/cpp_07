#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <exception>

template<typename T>
class Array
{
	T* array_;
	unsigned int	size_;
	public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);

	const unsigned int&	size() const;
	T&		operator[](unsigned int index);
	const T&	operator[](unsigned int index) const;
	void	printArray() const;
};

#include "Array.tpp"

#endif // !ARRAY_HPP
