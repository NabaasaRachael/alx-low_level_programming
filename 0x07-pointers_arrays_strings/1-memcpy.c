#include "main.h"
/**
 *_memcpy - copies characters from memory source to destination
 *@src: pointer to the source to be copied
 *@dest: pointer to the destination where the content is to be copied
 *@n: number of bytes to be copied
 *Return: returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
