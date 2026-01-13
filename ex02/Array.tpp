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
Array<T>::Array(unsigned int size): array_(new T[size]()), size_(size){}

template<typename T>
Array<T>::Array(const Array& other): array_(new T[other.size()]), size_(other.size())
{
	for (unsigned int i = 0; i < size_; i++)
		array_[i] = other.array_[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return (*this);
	T* newArray = new T[other.size_];
	for (unsigned int i = 0; i < size_; i++)
		newArray[i] = other.array_[i];
	delete[] array_;
	array_ = newArray;
	size_ = other.size_;
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= size_)
		throw std::out_of_range("index out of bounds");
	return array_[index];
}

template<typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= size_)
		throw std::out_of_range("index out of bounds");
	return array_[index];
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return this->size_;
}

template<typename T>
void Array<T>::printArray() const
{
	for (unsigned int i = 0; i < size_; i++)
		std::cout << array_[i] << " ";
	std::cout << std::endl;
}

#endif
