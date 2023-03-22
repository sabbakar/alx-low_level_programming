#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Description: This function prints the 26 lowercase letters of the alphabet,
 *              followed by a newline character.
 *
 * Return: void
 */

void print_alphabet(void)
{
int ap;


for (ap = 'a'; ap <= 'z'; ap++)
{
putchar(ap);
}
putchar('\n');
}
