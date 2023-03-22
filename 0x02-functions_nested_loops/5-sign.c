#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The number of which the signwill be printed
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
