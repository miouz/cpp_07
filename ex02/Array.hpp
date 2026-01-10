#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <exception>

template<typename T>
class Array
{
	T* array_;
	size_t	size_;
	public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);

	void	size() const;
	T&		operator[](unsigned int index) const;
	class OutOfBoundException: public std::exception
	{
		public:
		const char* what() const throw();
	};
};

#include "Array.tpp"
#endif // !ARRAY_HPP
