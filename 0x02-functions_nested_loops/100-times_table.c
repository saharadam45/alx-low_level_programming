#include "main.h"
/**
 * print_times_table - print times table from 0 to n
 * @num: end of times table to be printed
 *
 * Return: return value is void
 */
void print_times_table(int num)
{
	if (num >= 0 && num <= 15)
	{
		int i, j;

		for (i = 0; i <= num; i++)
		{
			for (j = 0; j <= num; j++)
			{
				int n = i * j;

				if (n > 99)
				{
					_putchar(n / 100 + '0');
					_putchar((n % 100) / 10 + '0');
					_putchar(n % 10 + '0');
				}
				else if (n > 9)
				{
					_putchar(' ');
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				else
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(n + '0');
				}
				if (j == num)
					break;

				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
