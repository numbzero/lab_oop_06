#include "lab_oop_06.h"

template <typename T>
std::size_t	MergeSort<T>::min(std::size_t x, std::size_t y)
{
	return (x < y) ? x : y;
}