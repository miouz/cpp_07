#ifndef ARRAY_TPP
#define ARRAY_TPP

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

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= size_)
		throw Array<T>::OutOfBoundException();
	return array_[index];
}

template<typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= size_)
		throw	Array<T>::OutOfBoundException();
	return array_[index];
}

template<typename T>
const unsigned int&	Array<T>::size() const
{
	return this->size_;
}

template<typename T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return ("index out of bound");
}

#endif
