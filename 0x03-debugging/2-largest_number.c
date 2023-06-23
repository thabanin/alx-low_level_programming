#include "main.h"

/**
 * largest_number - return the lagest of 3 numbers
 * @a: first integer
 * @b: secound integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		lagest = c
	}

return (largest);
}
