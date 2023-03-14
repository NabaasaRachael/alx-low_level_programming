#include "main.h"
#include <stdlib.h>
/**
 *create_array - function to create an array
 *@size: array size
 *@c: char
 *Return: pointer to array created or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *t;

	unsigned int i;

	t = malloc(sizeof(char)*size);
	if (size == 0 || t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
