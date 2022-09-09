#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 * Description: using the main function
 * this program prints
 * Progamming is positive, zero, or negative
 * Return: 0 (success)
 */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf\9"%d is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	return (0)
}
