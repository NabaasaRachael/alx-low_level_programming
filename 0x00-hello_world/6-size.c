#include <stdio.h>
/**
 * main - a program that prints the prints sizes of variables
 * Return: 0
*/
int main(void)
{
int a;
char b;
long int c;
long long int d;
float e;
printf("Size of an int: %i byte(s)\n", sizeof(a));
printf("size of a char: %i byte(s)\n", sizeof(b));
printf("Size of a long int: %i byte(s)\n", sizeof(c));
printf("Size of a long long int: %i byte(s)\n", sizeof(d));
printf("Size of a float: %i byte(s)\n", sizeof(e));
return (0);
}
