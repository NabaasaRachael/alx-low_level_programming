#include "main.h"
/**
 *_pow_recursion - returns the exponential of a value
 *@x: value
 *@y: power
 *Return: returns exponetial value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
