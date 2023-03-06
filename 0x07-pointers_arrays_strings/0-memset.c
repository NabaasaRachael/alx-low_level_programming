#include "main.h"
/**
 *_memset - copies a character
 *@s: a pointer to the memory block
 *@b: value to be set
 *@n: number of bytes to be set
 *Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
