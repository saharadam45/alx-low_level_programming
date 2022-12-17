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
 * fibonacci - prints first 50 fibonacci numbers from 1 and 2
 *
 * Return: return value is void
 */
void fibonacci(void)
{
	long int first = 1;
	long int second = 2;
	long int third;
	int i;

	printf("%ld, ", first);
	printf("%ld, ", second);

	for (i = 0; i < 48; i++)
	{
		third = first + second;
		first = second;
		second = third;

		printf("%ld", third);
		if (i == 47)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
