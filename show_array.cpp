#include "lab_oop_06.h"

template <typename T>
void	MergeSort<T>::show_array(void)
{
	std::cout << "[?] Length is " << length << std::endl;
	for (std::size_t i = 0; i < length; i++)
		std::cout << "[" << array[i] << "] ";
	std::cout << std::endl;
	return ;
}