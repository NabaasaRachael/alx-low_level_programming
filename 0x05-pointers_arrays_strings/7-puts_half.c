#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half a string
 *
 * @str: string to split into two
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i;

	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (i = (_strlen(str) + oE) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
