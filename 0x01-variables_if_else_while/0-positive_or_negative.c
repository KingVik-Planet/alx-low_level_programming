#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The program that print negative and positive of random Number
 * Author: KingVik-Planet
 * Date: 01-0-203
 * Details: c program to print -ve, zero and -ve results of a random number
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
