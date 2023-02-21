#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point. Generates a random number and prints the last digit.
 *
 * Return: 0 on success.
 * main - main block
 * Description: Get a random number and print the number
 * positive,nagetive or zero
 */
int main(void)
{
	int n;
	int last;

	srand(time(0)); /* seed the random number generator with the current time */
	n = rand(); /* generate a random number and store it in n */

	printf("Last digit of %d is ", n);

	int last_digit = n % 10;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last_digit > 5)
	if (last == 0)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("0 and is 0\n");
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}

	return (0);
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
	}	return (0);
}
