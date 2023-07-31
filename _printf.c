#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <strings.h>
/***
 *_printf -Produces output accordint to given format
 *@format:Given format
 *Return:Printed characters
 */
int _printf(const char *format, ...)
{
	int print = 0;
	va_list argc;

	if (*format == '\0')
	{
		return (-1);
	}
	va_start(argc, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		format++;
	}
	return (print);
}
