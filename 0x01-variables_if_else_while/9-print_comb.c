#include <stdio.h>

/**
 * main- Prints all posible combinations of single digit-numbers
 *
 *Return: Always return zero (Success)
 */

	int main(void)

	{
		int ch;

		ch = '0';

		while (ch <= '9')

			{
			putchar(ch);

			ch++;

			putchar(',');

			putchar('\t');

			}

		putchar('\n');

		return (0);

	}
