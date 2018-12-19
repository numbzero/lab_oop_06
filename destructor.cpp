#include "lab_oop_06.h"

template <typename T>
MergeSort<T>::~MergeSort(void)
{
#if DEBUG
	std::cout << "[debug] Destructor.\n";
#endif
	delete []array;
}