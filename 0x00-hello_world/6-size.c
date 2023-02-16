#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer it is compiled and run on
 * Return: 0
*/
int main(void) 
{
    int i;
    char c;
    long int l;
    long long int d;
    float d;

    
    printf("Size of int: %zu bytes\n", sizeof(i));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of long int: %zu bytes\n", sizeof(l));
    printf("Size of long long int: %zu byte\n", sizeof(d));
    printf("Size of float: %zu byte\n", sizeof(f));

    return 0;
}
