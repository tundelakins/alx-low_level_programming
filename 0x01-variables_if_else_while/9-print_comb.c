#include <stdio.h>

/**
 * main- Prints all posible combinations of single digit-numbers
 *
 *Return: Always return zero (Success)
 */

	int main(void)

	{
		int ch;

		ch = 0;

		while (ch < 10)

			{

			putchar(48 + ch);
			if (ch != 9)
			{


			putchar(',');
			putchar(' ');


			}

			ch++;



			}

		putchar('\n');

		return (0);

	}
