#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be added to
 * @src: string to add
 * @n: int
 *
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length;

	int i;

	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
