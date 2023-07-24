#include "main.h" /*Include the header file with the function prototypes*/

/**
*_putchar-Custom implementation of putchar to satisfy instruction 10.
*@c:The character to be written.
*Return:On success,returns the character written.On error, -1 is returned.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*_puts-Prints a string followed by a new line to stdout.
*@str:Pointer to the input string.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
    }
	_putchar('\n'); /*Print a new line after the string*/
}
