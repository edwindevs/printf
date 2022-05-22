
#include "main.h"

/**
 *print_str - loops through a string and prints
 *eveery character
 *@l: va_list arguments from _printf
 *@f: pointer to the struct argz that determines
 *value passed
 *Return: number of characters printed
 */

int print_str(va_list l, argz_x *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 *print_char - print character
 *@l: va_list argumentsfrom _printf
 *@f: pointer to the struct argz that determines 
 *if a varg is passed to _printf
 *Return: number of char printed
 */

int print_char(va_list l, argz_x *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
