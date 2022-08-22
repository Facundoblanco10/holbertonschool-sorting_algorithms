#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order,
 * using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp = 0;

	while (array && i < size)
	{
		if (array[i] > array[i + 1] && array[i + 1] && (i + 1) < size)
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i++;
			for (j = 0; j < size; j++)
			{
				if (j != 0)
					printf(", ");
				printf("%d", array[j]);
			}
			printf("\n");
			i = 0;
			continue;
		}
		i++;
	}
}
