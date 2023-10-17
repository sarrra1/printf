#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int handle_to_printf(const char *format, int *i, va_list list_args_print);
int handle_to_print_integer(int sara_int);

#endif
