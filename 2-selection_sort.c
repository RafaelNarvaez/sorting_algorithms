#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order (Selection sort)
 * @array: pointer to array of integers
 * @size: size of the array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t x, y, idx, idy;
	int min;
	int flag;

	for (x = 0; x < size; x++)
	{
		min = array[x];
		idx = x;
		idy = 0;
		flag = 0;
		for (y = x + 1; y < size; y++)
		{
			idy++;
			if (array[y] < min)
			{
				min = array[y];
				idx = x + idy;
				flag = 1;
			}
		}
		if (flag == 0)
			continue;

		array[idx] = array[x];
		array[x] = min;
		print_array(array, size);
	}
}
