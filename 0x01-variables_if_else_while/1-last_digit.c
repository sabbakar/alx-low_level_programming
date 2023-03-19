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
int n = -98;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d and is ", n, abs(n) % 10);

if (abs(n) % 10 > 5)
printf("greater than 5\n");
else if (abs(n) % 10 == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");

return (0);
}

