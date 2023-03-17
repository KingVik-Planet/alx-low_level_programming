#include <stdio.h>

/**
 * main - Entry point
 * Author: KingVik-Planet
 * Date: 17th Marcg 2023
 * Description: Program that prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int kingsley;

	for (kingsley = 48; kingsley < 58; kingsley++)
	{
		putchar(kingsley);
		if (kingsley != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
