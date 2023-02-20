#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts a given array in ascending order with
 * the selection sort algorithm
 *
 * @array: pointer to array
 * @size: size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int small, idx;

	if (array == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[j] < small)
			{
				small = array[j];
				idx = j;
			}
		}
		if (small != array[i])
		{
			array[idx] = array[i];
			array[i] = small;
			print_array(array, size);
		}
	}
}
