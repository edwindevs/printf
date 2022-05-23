
#include "main.h"

/**
 * get_varg - turns on argz
 * a varg modifier in the format string
 * @s: character that holds the varg specifier
 * @f: pointer to the struct argz in which we turn the argz on
 *
 * Return: int
 */
int get_varg(char s, argz_x *f)
{
    int i = 0;

    switch (s)
    {
    case '+':
        f->addz = 1;
        i = 1;
        break;
    case ' ':
        f->spz = 1;
        i = 1;
        break;
    case '#':
        f->hTag = 1;
        i = 1;
        break;
    }

    return (i);
}

