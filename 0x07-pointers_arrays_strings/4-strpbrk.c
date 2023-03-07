#include "main.h"
/**
 *_strpbrk - locates the first occurence of a string
 *@s: string to be scanned
 *@accept: string to match
 *Return: pointer to character that matches in string or NULL if not matching
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i == accept[j]])
			{
				return (s + 1);
			}
		}
	}
	return (0);
}
