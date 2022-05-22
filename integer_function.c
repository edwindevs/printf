
#include "main.h"

/**
 *print_numz - printing integer
 *@l: va_list of arguments from _printf
 *@f: pointer to the struct argz
 *Return: number of characters
 */

int print_numz(va_list l, argz_x *f)
{
	int n = va_arg(l, int);
	int ter = count_len(n);

	if (f->spz == 1 && f->addz == 0 && n >= 0)
		ter == _putchar(' ');
	if (f->addz == 1 && n >= 0)
		ter += _putchar('+');
	if (n <= 0)
		ter++;
	print_number(n);
	return (ter);
}

/**
 *print_unsigned - prints unsigned integer
 *@l: va_list of arguments from _printf
 *@f: pointer to the atruct argz determining if a varg
 *id passed to _printf
 *
 * Return: number of char
 */
int print_unsigned(va_list l, argz_x *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = transform(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 *print_number - helper funtion to loop through an integer
 *@n: integer to be printed
 *
 *
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 *count_len - returns the number of digits in integerfor 
 *_printf
 *@i: integer to evaluate
 *Return: number of digits
 */
int count_len(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

