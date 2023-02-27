#include "main.h"
/**
 * swap_int - swaps the values of integers
 *
 * @a: int to be swapped
 * @b: int to be swapped
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
		int c = *b;
			int d = *a;
				*a = c;
					*b = d;
}
