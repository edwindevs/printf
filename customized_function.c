
#include "main.h"

/**
 *print_nonXter - Non printable characters
 *(0 < ASCII value < 32 >= 127) are printed this way:
 *\x, followed by ASCII code value in hexadecimal(uppercase
 *and always 2 characters
 *@l: va_list arguments from _printf
 *@f: pointer to the structargz that determines if a varg is 
 *passed to _printf
 *Return: number of char printed
 */
int print_nonXter(va_list l, argz_x *f)
{
	int i, count = 0;
	char *ter;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			ter = transform(s[i], 6, 0);
			if (!ter[1])
				count += _putchar('0');
			count += _puts(ter);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 *print_reverse - prints reverse of a string
 *@l: arguments from _printf
 *@f: pointer to the struct argz
 *Return: length of the printed string
 *
 */

int print_reverse(va_list l, argz_x *f)
{
	int = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	for (j = 1 - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}

/**
 *print_rot13 - prints s atring using rot13
 *@l: list of arguments
 *@f: pointerto the struct
 *
 *Return: length of the printed string
 */

int print_rot13(va_list l, argz_x *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
	return (j);

}

/**
 *print_percent - prints a percent
 *@l: va_list arguments
 *@f: pointer to the struct
 *Return: number of characetr
 */
int print_percent(va_list l, argz_x *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
