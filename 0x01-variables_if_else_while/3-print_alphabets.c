#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (succuss)
 */

int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'Z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
