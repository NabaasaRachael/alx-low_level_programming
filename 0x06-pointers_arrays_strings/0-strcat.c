#include "main.h"
/**
 * _strcat - concatenates the string to the dest string
 *@dest: string to be added to
 *@src: string to add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length;

	int i;

	dest_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_length] = src[i];
		i++;
	}
	dest[dest_length] = '\0';
	return(dest);
}
