#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the lowercase alphabet in reverse
 * Date: 17032023
 * author: KingVik-Planet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kingsley;

	for (kingsley = 'z'; kingsley >= 'a'; kingsley--)
		putchar(kingsley);
	putchar('\n');
	return (0);
}
