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
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (min < max; i++;)
		ptr[i] = min++;
	return (ptr);
}
