#include <stdio.h>


/**
 * main- Entry Point
 *
 * Prints all posible different combinations
 * of three-digits numbers
 *
 *Return: Always zero (Success)
 */


	int main(void)

	{
		int nm;
		int fd;
		int sd;
		int ld;

		for (nm = 0; nm <= 999; nm++)

		{

			fd = (nm / 100) % 10;
			sd = (nm / 10) % 10;
			ld = nm % 10;

			if (fd < sd && sd < ld)

			{
				putchar(fd + '0');
				putchar(sd + '0');
				putchar(ld + '0');

				if (nm < 789)

				{
					putchar(',');
					putchar(' ');



				}

			}

		}

		putchar('\n');

		return (0);
	}











