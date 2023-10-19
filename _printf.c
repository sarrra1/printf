#include "main.h"

/**
 * _printf - function that print  output though a format.
 *@format: The argument of the function printf
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int print_count = 0;
va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'd':
case 'i':
{
int arg = va_arg(args, int);
print_count += handle_to_print_integer(arg);
break;
}
case 'c':
{
char arg = va_arg(args, int);
write(1, &arg, 1);
print_count++;
break;
}
case 's':
{
char *arg = va_arg(args, char *);
int i = 0;
while (arg[i] != '\0')
{
write(1, &arg[i], 1);
i++;
print_count++;
}
break;
}
case '%':
{
write(1, "%", 1);
print_count++;
break;
}
default:
{
write(1, "%", 1);
write(1, format, 1);
print_count += 2;
break;
}
}
}
else
{
write(1, format, 1);
print_count++;
}
format++;
}

va_end(args);
return (print_count);
}
