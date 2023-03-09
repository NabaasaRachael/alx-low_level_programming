#include "main.h"
/**
 *_puts_recursion - prints a string
 *@s: string to be recursed
 *Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
