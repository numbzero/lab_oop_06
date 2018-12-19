#include "lab_oop_06.h"

template <typename T>
void	MergeSort<T>::merge(std::size_t l, std::size_t m, std::size_t r)
{
	std::size_t	i;
	std::size_t j;
	std::size_t	k;
	std::size_t	n1;
	std::size_t n2;
	T 			*L;
	T 			*R;

	n1 = m - l  + 1;
	n2 = r - m;
	L = new T[n1];
	R = new T[n2];
	for (i = 0; i < n1; i++) L[i] = this->array[l + i];
	for (j = 0; j < n2; j++) R[j] = this->array[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			this->array[k] = L[i];
			i++;
		}
		else
		{
			this->array[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		this->array[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		this->array[k] = R[j];
		j++;
		k++;
	}
	delete []L;
	delete []R;	
}