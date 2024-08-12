#include "sort.h"

int partition(int *array, int low, int hight, size_t size)
{
	int p = array[hight];
	int i = low - 1, j, temp;

	for (j = low; j < hight; j++)
	{
		if (array[j] <= p)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[hight];
	array[hight] = temp;

	print_array(array, size);
	return (i + 1);
}

void quick_sort_help(int *array, int low, int hight, size_t size)
{
	int pa;

	if (low >= 0 && low < hight)
	{
		pa = partition(array, low, hight, size);
		quick_sort_help(array, low, pa - 1, size);
		quick_sort_help(array, pa + 1, hight, size);
	}
}

/**
 * quick_sort - sorts an array of integers in
 * scending order using the Quick sort algorithm
 * @array: A array of integer
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_help(array, 0, size - 1, size);
}