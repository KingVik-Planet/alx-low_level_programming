#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: The character to print
 * Description: Progrm
 * Return: nothing, return void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
