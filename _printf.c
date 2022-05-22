
#include "main.h"
#include <stdarg.h>

/**
 *
 *
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	int i = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}

	/*
	
	va_list list;
	int i, j;
	int num = 0;

	va_start(list, format);
	
	i = 0;
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i+1] == 'd')
			{
				i++;
				num = va_arg(list, int);
				while (num > 0)
				{
					_putchar('0' + (num % 10));
					num /= 10;
				}
			}
		}
		i++;
	}
	va_end(list);
*/
	return (0);
}

int main(void)
{
	_printf("Hello worls\n");
	return (0);
}
