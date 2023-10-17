#include "main.h"

/**
 * handle_to_print_integer - this print integers.
 *
 * @sara_int: value to be printt.
 * Return: return the number of char that wee print.
 */

int handle_to_print_integer(int sara_int)
{
int sara_print = 0;
char dania_buff[56];
int iii = 0;
int lolo;

if (sara_int < 0)
{
sara_int = -sara_int;
write(1, "-", 1);
sara_print++;
}

if (sara_int == 0)
{
dania_buff[iii] = '0';
iii++;
sara_print++;
}

if (sara_int > 0)
{
while (sara_int != 0)
{
dania_buff[iii] = '0' + (sara_int % 10);
sara_int /= 10;
iii++;
sara_print++;
}
}

for (lolo = iii - 1; lolo >= 0; lolo--)
{
write(1, &dania_buff[lolo], 1);
sara_print++;
}
return (sara_print);
}
