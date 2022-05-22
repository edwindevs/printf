#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct argz - struct containing argz to "turn on"
 * when a varg specifier is passed to _printf()
 * @addz: varg for the '+' character
 * @spz: varg for the ' ' character
 * @hTag: varg for the '#' character
 */
typedef struct argz
{
    int addz;
    int spz;
    int hTag;
} argz_x;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
    char c;
    int (*f)(va_list ap, argz_x *f);
} printH;

/* print_nums */
int print_numz(va_list l, argz_x *f);
void print_number(int n);
int print_unsigned(va_list l, argz_x *f);
int count_len(int i);

/* print_bases */
int print_hexaDec(va_list l, argz_x *f);
int print_hexaDec_big(va_list l, argz_x *f);
int print_bin(va_list l, argz_x *f);
int print_base(va_list l, argz_x *f);

/* transformer */
char *transform(unsigned long int num, int base, int smallcaps);

/* _printf */
int _printf(const char *format, ...);

/* access_print */
int (*access_print(char s))(va_list, argz_x *);

/* get_varg */
int get_varg(char s, argz_x *f);

/* print_alpha */
int print_str(va_list l, argz_x *f);
int print_char(va_list l, argz_x *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, argz_x *f);
int print_reverse(va_list l, argz_x *f);
int print_nonXter(va_list l, argz_x *f);

/* print_address */
int print_address(va_list l, argz_x *f);

/* print_percent */
int print_percent(va_list l, argz_x *f);


#endif

