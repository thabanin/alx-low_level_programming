#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charecter c to stdout
 * @c: the charecter to print
 *
 * return: success 1.
 * on error, -1 is returned,and error is set appropriently
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
