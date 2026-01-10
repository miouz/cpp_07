#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, const size_t N, typename FUNC>
void iter(T (&array)[N], FUNC func)
{
	for (size_t i = 0; i < N; i++)
		func(array[i]);
}
#endif // !ITER_HPP
