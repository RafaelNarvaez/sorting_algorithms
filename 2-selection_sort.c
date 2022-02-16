#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to array of integers
 * @size: size of the array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, idy;
	int min;
	int flag;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		idx = i;
		idy = 0;
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			idy++;
			if (array[j] < min)
			{
				min = array[j];
				idx = i + idy;
				flag = 1;
			}
		}
		if (flag == 0)
			continue;

		array[idx] = array[i];
		array[i] = min;
		print_array(array, size);
	}
}
