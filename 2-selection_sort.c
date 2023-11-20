#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: An array of integers
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{

size_t i, j, jMin;

for (i = 0; i <= size; i++)
{
	jMin = i; /*consider the first element as min*/
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[jMin])
			jMin = j;
	}
	if (jMin != i)
	{
		swap_int(array, i, jMin);
		print_array(array, size);
	}
}

}

/**
 * swap_int - Swap two integers in an array
 * @array: array to use
 * @a: first integer
 * @b: second integer
*/
void swap_int(int *array, size_t a, size_t b)
{
int tmp;
tmp = array[a];
array[a] = array[b];
array[b] = tmp;
}
