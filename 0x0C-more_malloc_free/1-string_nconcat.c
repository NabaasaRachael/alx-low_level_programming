#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates n strings
 * @s1: string1
 * @s2: string2
 * @n: unsignedd int
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;


	char *s;


	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";
	len1 = 0;

	len2 = 0;

	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;
	if (n >= len2)
		n = len2;
	s = malloc(sizeof(char) * n + len1 + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[i + len1] = s2[i];
	s[i + len1] = '\0';
	return (s);
}
