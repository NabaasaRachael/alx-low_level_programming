#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - entry point
 * @argc: argument c
 * @argv: vector to arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
