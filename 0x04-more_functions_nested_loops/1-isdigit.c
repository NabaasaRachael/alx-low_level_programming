#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 * Return: 1 or 0 depending on the condition
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
