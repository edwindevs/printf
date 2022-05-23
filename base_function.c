#include "main.h"

/**
 * print_hexaDec - prints a number in hexadecimal base,
 * in smallcaps
 * @l: va_list arguments from _printf
 * @f: pointer to the struct argz that determines
 * if a varg is passed to _printf
 * Description: the function calls transform() which in turns transforms the input
 * number into the correct base and returns it as a string
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
 * print_hexaDec_big - prints a number in hexadecimal base,
 * in uppercase
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a varg is passed to _printf
 * Description: the function calls transform() which in turns transforms the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hexaDec_big(va_list l, argz_x *f)
{
    unsigned int num = va_arg(l, unsigned int);
    char *str = transform(num, 16, 0);
    int count = 0;

    if (f->hTag == 1 && str[0] != '0')
        count += _puts("0X");
    count += _puts(str);
    return (count);
}

/**
 * print_bin - prints a number in base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a varg is passed to _printf
 * Description: the function calls transform() which in turns transforms the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_bin(va_list l, argz_x *f)
{
    unsigned int num = va_arg(l, unsigned int);
    char *str = transform(num, 2, 0);

    (void)f;
    return (_puts(str));
}

/**
 * print_base - prints a number in base 8
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a varg is passed to _printf
 * Description: the function calls transform() which in turns transforms the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
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

