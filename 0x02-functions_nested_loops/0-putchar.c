#include <stdio.h>
#include "main.h"

/**
 * main - Function main entry
 *
 * This program prints _putchar followes by a newline
 *
 * Return: Always zero (Succes)
 */

	int main(void)

	{

		char s[9] = "_putchar";
		int i = 0;

		while (i < 8)
		{

			_putchar(s[i]);
			i++;

		}
		_putchar('\n');

		return (0);

	}

