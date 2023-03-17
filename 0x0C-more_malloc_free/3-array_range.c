#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: smallest int
 * @max: largest int
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i, size;

	if (min > max)
		return (NULL);
	size = 0;
	for (i = min; i <= max; i++)
		size++;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
