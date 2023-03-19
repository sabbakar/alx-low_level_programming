#include <stdio.h>

/**
* main - entry point of the program
*
* This function prints the alphabet in lowercase, and then in uppercase,
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{int i;

/* print lowercase alphabet */
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

/* print uppercase alphabet */
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}

putchar('\n');

return (0);
}

