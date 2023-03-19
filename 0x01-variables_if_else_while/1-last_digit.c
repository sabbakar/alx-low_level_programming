#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of the program
 *
 * This function generates a random number and prints whether it is
 * positive or negative, as well as its last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("The last digit of %d is %d ", n, n % 10);

if (n > 0)
printf("and is positive\n");
else if (n < 0)
printf("and is negative\n");
else
printf("and is zero\n");

return (0);
}

