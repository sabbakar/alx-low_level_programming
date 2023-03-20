#include <stdio.h>

/**
* main - entry point of the program
*
* This function prints the alphabet in lowercase, excluding 'e' and 'q',
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}

putchar('\n');

return (0);
}

