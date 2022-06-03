#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char firstPart[13] = "Last digit of";
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%s %i is %i and is greater than 5\n", firstPart, n, lastDigit);
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf(
				"%s %i is %i and is less than 6 and not 0\n", firstPart, n, lastDigit);
	} else
	{
		printf("%s %i is %i and is zero\n", firstPart, n, lastDigit);
	}
	return (0);
}
