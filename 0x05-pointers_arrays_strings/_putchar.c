#include <unistd.h>

/**
 * _putchar - writes the charecter c to stdout
 * @ci: the charecter to print
 * Return: on success 1
 * on error: -1 is returned, and error is set appropriently
 */

int _putchar(char c)
{
	return(write(1,&c, 1));
}
