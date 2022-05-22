
#incude "main.h"

/**
 *print_hexaDec - prints a number in hexadecimal base
 *@l: va_list argumentsfrom _printf
 *@f: pointer to the struct argz that determines if a varg
 *is passed to _printf
 *Description: the function calls transform() which in turn 
 *transformst the input number into the correct base
 *
 * Return: the number of char printed
 */

int print_hexaDec(va_list l, argz_x *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = transform(num, 16, 1);
	int count = 0;

	if (f->hTag == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 *print_hexaDec_big - print a number in hexa base in uppercase
 *@l: va_list arguments from _printf
 *@f: pointer to the structthat determines if arg is passed
 *Description: the function calls transform() 
 *
 *Return: the number of char printed
 */

int print_hexaDec_big(va_list l, argz_x *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = transform(num, 16, 0);
	int count = 0;

	if (f->hTag == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 *print_bin - print a no in ase 2
 *@l: va_list
 *@f: pointer to the struct
 *Description: the unction calls transform() to transofrm
 *the input
 *
 *Return: the number of char printed
 */

int print_bin(va_list l, argz_x *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = transform(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 *print_base - print in base 8
 *@l: va_list arg
 *@f: pointer to the structthat determines if a varg
 *is passed to int
 *Description: the function call transform()
 *Return: the number of char printed
 */

int print_base(va_list l, argz_x *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = transform(num, 8, 0);
	int count = 0;

	if (f->hTag == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
