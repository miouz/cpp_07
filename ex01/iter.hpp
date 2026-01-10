#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, const unsigned int N, typename FUNC>
void iter(T (&array)[N], FUNC func)
{
	for (unsigned int i = 0; i < N; i++)
		func(array[i]);
}
#endif // !ITER_HPP
