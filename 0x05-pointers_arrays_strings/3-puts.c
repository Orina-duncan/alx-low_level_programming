#include "main.h" /*Include the header file with the function prototypes*/
/**
 * _puts - will print a string, then followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
