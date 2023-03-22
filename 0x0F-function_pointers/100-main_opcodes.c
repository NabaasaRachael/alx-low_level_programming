#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	unsigned char opcode;

	int op_size;

	int count;

	int (*location)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	op_size = atoi(argv[1]);

	if (op_size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (count = 0; count < op_size; count++)
	{
		opcode = *(unsigned char *)location;
		printf("%.2x", opcode);
		if (count == op_size - 1)
			continue;
		printf(" ");
		location++;
	}
	printf("\n");
	return (0);
}
