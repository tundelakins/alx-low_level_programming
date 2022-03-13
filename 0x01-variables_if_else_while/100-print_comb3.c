#include <stdio.h>


/**
 * main- Entry Point
 *
 * Prints all posible different combinations
 * of two-digits numbers
 *
 *Return: Always zero (Success)
 */


	int main(void)

	{
		int nm;
		int sd;
		int ld;

		for (nm = 0; nm <= 99; nm++)

		{

			sd = (nm / 10) % 10;
			ld = nm % 10;

			if (sd < ld)

			{
				putchar(sd + '0');
				putchar(ld + '0');

				if (nm < 89)

				{
					putchar(',');
					putchar(' ');



				}

			}

		}

		putchar('\n');

		return (0);
	}











