#include <stdio.h>
/**
 * main - program compilation begins from main
 * Description: Program to print all possible combinations of numbers
 * author: KingVik-Planet
 * Return: 0 means success
 */
int main(void)
{
        int a, b;

        for (a = 48; a <=57; a++)
        {
                for (b = 49; b <= 57; b++)
                {
                        if ( a != b && b > a)
                        {
                                putchar(a);
                                putchar(b);
                                putchar(',');
                        }
                }
        }
        putchar('\n');
        return (0);
}
