#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet 10 times.
 */
void print_alphabet_x10(void)
{
    char alph;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (alph = 'a'; alph <= 'z'; alph++)
        {
            putchar(alph);
        }
        putchar('\n');
    }
}
