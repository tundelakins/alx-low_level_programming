#include <stdio.h>
/**
 * main- Prints lowercase followed by Uppercase Alphabet
 *
 * Return: Always return zero (Success)
 */

	int main(void)
	{

		char chA;
		char cha;

		for (cha = 'a'; cha <= 'z'; cha++)

			{

			putchar(cha);

			}

		for (chA = 'A'; chA <= 'Z'; chA++)

			{

			putchar(chA);

			}


			putchar('\n');


		return (0);

	}
