#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes thee character x to stdout
 * @x: the  charactter will  want to print
 *
 * Return: On success 1 and -1 when its  fails
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
