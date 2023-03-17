#include <stdio.h>

/**
 * main -Program that prints the alphabet in lowercase
 * Description: I will use my full name
 * Author: KingVik-Planet
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char kingsley;

	for (kingsley = 'a'; kingsley <= 'z'; kingsley++)
	{
		putchar(kingsley);
	}
	putchar('\n');
	return (0);
}
