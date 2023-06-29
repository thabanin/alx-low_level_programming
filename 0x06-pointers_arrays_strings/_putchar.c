#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @ci: Thr character to print
 * Return: on success 1
 * on error: -1  returned and error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
