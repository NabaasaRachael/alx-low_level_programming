#include "main.h"
/**
 * print_last_digit - main emtry
 *@n: the integer to check
 * Return: always 0
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
