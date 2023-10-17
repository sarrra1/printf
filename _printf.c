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
putchar (*format);
char_prints++;
}
else
{
switch (*++format)
{
case 's': {
char *str = va_arg(list_of_args_to_print, char*);
int str_len = 0;
int i;
while (str[str_len] != '\0')
str_len++;
for (i = 0 ; i < str_len ; i++)
{
putchar(str[i]);
char_prints++;
}
break;
}
case 'c': {
char c = va_arg(list_of_args_to_print, int);
putchar(c);
char_prints++;
break;
}
case '%':{
putchar('%');
char_prints++;
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
