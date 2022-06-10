#include <stdio.h>

/**
 * main - main function
 * Description: print numbers 1 to 100. Replace
 * multiples of 3 with Fizz and multiples of
 * 5 with Buzz and multiples of both 3 and 5
 * with FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num < 101)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
		num++;
	}
	printf("\n");
	return (0);
}
