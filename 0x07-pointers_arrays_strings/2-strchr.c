#include "main.h"
/**
 *_strchr - locates for a character in a string
 *@s: pointer to the string to be searched
 *@c: character to be located
 *
 *Return: returns pointer to s in occurence of c or NULL if no occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		s[i] = c;
		return (s);
	}
	return (0);
}
