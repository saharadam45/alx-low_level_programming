#include <stdio.h>
void fibonacci(void);
/**
 * main - Entry point
 *
 * Return: Always returns 0
 */
int main(void)
{
	fibonacci();
	return (0);
}

/**
 * fibonacci - prints the sum of the even fibonacci numbers less than 4000000
 *
 * Return: return value is void
 */
void fibonacci(void)
{
	long int first = 1;
	long int second = 2;
	long int third;
	long int number = 2;

	while (number < 4000000)
	{
		third = first + second;
		first = second;
		second = third;

		if (third % 2 == 0)
		{
			number += third;
		}
	}
	printf("%ld\n", number);
}
