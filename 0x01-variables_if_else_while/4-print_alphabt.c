#include <stdio.h>


/**
 * main- Prints alphabet is lowercaase
 * excluding q and e
 *
 *Return: Always zero (Success)
 */

	int main(void)

	{
		int c;

		for (c = 'a'; c <= 'z'; c++)

		{
			if (c != 'q' && c != 'e')
			{
				putchar(c);
			}

		}

			putchar('\n');

		return (0);

	}
