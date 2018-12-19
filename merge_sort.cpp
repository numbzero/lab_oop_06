#include "lab_oop_06.h"

template <typename T>
void	MergeSort<T>::merge_sort(void)
{
	std::size_t	curr_size;
	std::size_t	left_start;
	std::size_t	mid;
	std::size_t	right_end;

	for (curr_size = 1; curr_size <= this->length - 1; curr_size = 2 * curr_size)
	{
		for (left_start = 0; left_start < this->length - 1; left_start += 2 * curr_size)
		{
			mid = left_start + curr_size - 1;
			if (mid >= this->length) break;
			right_end = this->min(left_start + 2 * curr_size - 1, this->length - 1);
			this->merge(left_start, mid, right_end);
		}
	}
}