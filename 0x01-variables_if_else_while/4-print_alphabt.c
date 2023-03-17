#include <stdio.h>

/**
 * main - Entry point
 * author: KingVik-Planet
 * Description: program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kingsley;

	for (kingsley = 'a'; kingsley <= 'z'; kingsley++)
	{
		if (kingsley != 'q' && kingsley != 'e')
			putchar(kingsley);
	}
	putchar('\n');
	return (0);
}
