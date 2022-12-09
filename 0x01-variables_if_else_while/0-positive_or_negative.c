#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*The variable n will store a different value every time you will run this program */
/*You don’t have to understand what rand, srand, RAND_MAX do.*/
/**
 * main - Prints a random number and states whether.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
