/**
 * transform - transforms number and base into string
 * @num: input mumber
 * @base: input base
 * @smallcaps: varg if hexa values need to be smallcaps
 * Return: string
 */
char *transform(unsigned long int num, int base, int smallcaps)
{
    static char *rpzt;
    static char buffer[50];
    char *ptr;

    rpzt = (smallcaps)
? "0123456789abcdef"
: "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';
    do
    {
        *--ptr = rpzt[num % base];
        num /= base;
    } while (num != 0);

    return (ptr);
}
