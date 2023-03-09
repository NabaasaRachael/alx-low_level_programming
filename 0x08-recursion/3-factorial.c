#include "main.h"
/**
 *factorial - gives the factorial of a number
 *@n: number
 *Return: returns the factor or 1 depending on the condition
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
