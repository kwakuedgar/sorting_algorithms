#include "sort.h"


/**
 * bubble_sort - sorts array in ascending order
 * @array: array to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
short int swapped;
int tmp;

do {
	swapped = 0;
	for (i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
			tmp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = tmp;
			swapped = i;
			print_array(array, len);
		}
	}
	size = swapped;
} while (size >= 1);

}
