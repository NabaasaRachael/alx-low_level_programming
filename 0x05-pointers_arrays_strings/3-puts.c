#include "main.h"
#include "2-strlen.c"
/**
 * _puts - puts a string
 * @str: string to put
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
