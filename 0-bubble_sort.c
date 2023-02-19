#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts a given array using the bubble sort algorithm
 *
 * @array: the array
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int curr, next;
	int flag;

	if (array == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
	{
		flag = 1;
		for (j = 0; j < size; j++)
		{
			curr = array[j];
			next = array[j + 1];
			if (next < curr)
			{
				array[j] = next;
				array[j + 1] = curr;
				flag = 0;
				print_array(array, size);
			}
		}
		if (flag == 1)
			break;
	}
}
