#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -Entry point
 *
 * description: "the program will print the last digit"
 * return: 0 (success)
 */

int main(void)
{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, x);
	else if (x < 6 && x != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, x);
	else
		printf("last digit of %d is %d and is 0\n", n, x);
	return (0);
}
