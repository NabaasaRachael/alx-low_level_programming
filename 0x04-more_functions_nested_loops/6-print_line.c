#include "main.h"
/**
 * print_line - draws astraight line in terminal
 *
 * @n: int to print
 *
 * return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
