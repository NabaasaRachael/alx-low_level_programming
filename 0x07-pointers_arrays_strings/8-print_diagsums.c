#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of two diagonals
 *@a: pointer
 *@size: size of array
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;

	int sum2 = 0;

	int k;

	for (k = 0; k < size; k++)
	{
		sum1 = sum1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		sum2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
