#include <stdio.h>
/**
 * main - a program that prints the prints sizes of variables
 * Return: 0
*/
int main()
{
    int a;
    char b;
    long int c;
    long long int d;
    float e;

   
    printf("Size of int: %zu byte(s)\n",(unsigned long)sizeof(a));
    printf("size of char: %zu byte(s)\n",(unsigned long)sizeof(b));
    printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(c));
    printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
    printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(e));
    
    return (0);
}
