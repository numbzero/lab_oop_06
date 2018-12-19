#include "lab_oop_06.h"

template <typename T>
void	MergeSort<T>::init(void)
{
	delete []array;
	array = nullptr;
	std::cout << "[+] Initiation.\n";
	std::cout << "\t[>] Size: ";
	std::cin >> length;
	array = new T[length];
	for (std::size_t i = 0; i < length; i++)
	{
		std::cout << "array[" << i << "] = ";
		std::cin >> array[i];
	}
}