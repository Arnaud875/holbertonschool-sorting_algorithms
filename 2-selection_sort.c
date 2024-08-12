#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: A array of integer
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		temp = array[min];
		array[min] = array[i];
		array[i] = temp;

		print_array(array, size);
	}
}
