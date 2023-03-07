#include "main.h"
/**
 *_strspn - gets the length of a prefix
 *@s: string to be scanned through
 *@accept: string with prefix to match
 *Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	int j;

	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[j] == '\0')
			return (n);
	}
	return (n);
}
