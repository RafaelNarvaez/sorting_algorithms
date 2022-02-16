#include <stddef.h>
#include "sort.h"

/**
* bubble_sort - Implements a Bubble sort algorithm
* @array: pointer
* @size: structure
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp_n;
	int swapp;

	i = 0;
	temp_n = 0;
	swapp = 0;
	while (array && i + 1 < size)
	{
	/* if number is big advance pointer positions */
		if (array[i] > array[i + 1])
		{
		/* if number is lower swap */
			temp_n = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp_n;
			print_array(array, size);
			swapp = 1;
		}
		i++;
	}
	if (swapp == 1)
	{
		/* reset */
		bubble_sort(array, size);
	}
}
