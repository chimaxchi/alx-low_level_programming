#include <stdio.h>
/* more headers goes there */
/**
* main - generates random numbers,delcares + OR -
 *
 * Return: 1, if succesful
 */
@@ -14,7 +14,6 @@ int main(void)
	/*code generates random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
