
#include "main.h"

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */

int _printf(const char *format, ...)
{
    int (*pfunc)(va_list, argz_x *);
    const char *p;
    va_list arguments;
    argz_x argz = {0, 0, 0};

    register int count = 0;

    va_start(arguments, format);
    if (!format || (format[0] == '%' && !format[1]))
        return (-1);
    if (format[0] == '%' && format[1] == ' ' && !format[2])
        return (-1);
    for (p = format; *p; p++)
    {
        if (*p == '%')
        {
            p++;
            if (*p == '%')
            {
                count += _putchar('%');
                continue;
            }
            while (get_varg(*p, &argz))
                p++;
            pfunc = access_print(*p);
            count += (pfunc)
                         ? pfunc(arguments, &argz)
                         : _printf("%%%c", *p);
        }
        else
            count += _putchar(*p);
    }
    _putchar(-1);
    va_end(arguments);
    return (count);
}
