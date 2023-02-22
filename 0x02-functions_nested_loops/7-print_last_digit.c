#include "main.h"
/**
 * print_last_digit - main emtry
 *@n: the integer to check
 * Return: always 0
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
