#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Description: This function generates the list of numbers from zero to nine and prints it out
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;

srand(time(0));
n = rand() - RAND_MAX / 2;

for (n = 0; n < 10; n++)
putchar (n + '0');
putchar('\n');



return (0);
}

