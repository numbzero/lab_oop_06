#include "lab_oop_06.h"

template <typename T>
MergeSort<T>::MergeSort(void): array(nullptr), length(0)
{
	srand(time(nullptr));
	length = rand() % 100 + 1;
	array = new T[length];
	if (!array) exit(1);
	srand(time(NULL));
	for (std::size_t i = 0; i < length; i++) array[i] = rand() % 100 + 1;
}