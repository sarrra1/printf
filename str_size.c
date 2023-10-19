#include "main.h"

/**
 * str_size - calculate the size
 * @size :pointer
 * Return: lens
 */

int str_size(char *size)
{
int lens = 0;
while (size[lens] != '\0')
lens++;

return (lens);
}
