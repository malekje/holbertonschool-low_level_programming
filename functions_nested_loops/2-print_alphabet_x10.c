#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
	{
		char alphabet;
		int i;

		for (i = 1; i <= 10; i++)
		{
			for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			{
				putchar(alphabet);
			}
			putchar('\n');
		}
	}
