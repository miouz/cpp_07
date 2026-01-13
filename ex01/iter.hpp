#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename FUNC>
void iter(T* array, const unsigned int size, FUNC func)
{
	for (unsigned int i = 0; i < size; i++)
		func(array[i]);
}
#endif // !ITER_HPP
