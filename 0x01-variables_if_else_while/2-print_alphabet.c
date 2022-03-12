#include <stdio.h>

/**
 * main- Prints alphabets in lower case
 *
 * Retun: Always 0 (Succes)
 */

	int main(void)
	{
		char ch = 'a';

		while (ch <= 'z')
		{

			putchar(ch);

			ch++;

		}
			putchar('\n');

		return (0);

	}
