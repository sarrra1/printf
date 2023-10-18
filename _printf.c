#include "main.h"

/**
 * _printf - function that print  output though a format.
 *@format: The argument of the function printf
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list list_of_args_to_print;
int char_prints = 0;
if (format == NULL)
return (-1);
va_start(list_of_args_to_print, format);

while (*format != '\0')
{
if (*format != '%')
{
_putchar (*format);
char_prints++;
}
else
{
switch (*++format)
{
case 's': {
char *str = va_arg(list_of_args_to_print, char*);
int i;
while (str[i] != '\0')
{

_putchar(str[i]);
char_prints++;
i++;
}
break;
}
case 'c': {
char c = va_arg(list_of_args_to_print, int);
_putchar(c);
char_prints++;
break;
}
case '%':{
_putchar('%');
char_prints++;
break;
}
case 'i':
case 'd':{
int sara_int = va_arg(list_of_args_to_print, int);
int sara_print = handle_to_print_integer(sara_int);
char_prints += sara_print;
break;
}
default:
break;
}
}
format++;
}
va_end(list_of_args_to_print);

return (char_prints);
}
