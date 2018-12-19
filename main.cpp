#include "lab_oop_06.h"
#include "constructors.cpp"
#include "destructor.cpp"
#include "show_array.cpp"
#include "init.cpp"
#include "merge.cpp"
#include "merge_sort.cpp"
#include "min.cpp"

int main(void)
{
	MergeSort<int>	test_1;

	test_1.show_array();
	test_1.merge_sort();
	test_1.show_array();
	return 0;
}
