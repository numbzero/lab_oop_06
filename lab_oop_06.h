#ifndef LAB_OOP_06_H
# define LAB_OOP_06_H

# include <iostream>
# include <cstdlib>

# include <unistd.h>

template <typename T>
class MergeSort
{
	private:	
		T 			*array;
		std::size_t	length;
	public:
		MergeSort(void);
		~MergeSort(void);
		void		init(void);
		void		show_array(void);
		void		merge_sort(void);
		void		merge(std::size_t l, std::size_t m, std::size_t r);
		std::size_t	min(std::size_t x, std::size_t y);
};

#endif
