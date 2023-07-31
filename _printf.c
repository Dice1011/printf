#include "main.h"

/***
 *_printf -Produces output accordint to given format
 *@format:Given format
 *Return:Printed characters
i */
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
	va_end(argc);
	return (print);
}
