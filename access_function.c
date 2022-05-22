
#include "main.h"
#include <stddef.h>
/**
 * access_print - selects function
 * specific to conversion specifier passed
 * @s: holds the conversion specifier
 * Description: the function loops through the structs array
 * handler_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*access_print(char s))(va_list, argz_x *)
{
	printH handler_arr[] = {
		{'i', print_numz},
		{'s', print_str},
		{'c', print_char},
		{'d', print_numz},
		{'u', print_unsigned},
		{'x', print_hexaDec},
		{'X', print_hexaDec_big},
		{'b', print_bin},
		{'o', print_base},
		{'R', print_rot13},
		{'r', print_reverse},
		{'S', print_nonXter},
		{'p', print_address},
		{'%', print_percent}
		};
	int argz = 14;

	register int i;

	for (i = 0; i < argz; i++)
		if (handler_arr[i].c == s)
			return (handler_arr[i].f);
	return (NULL);
}
