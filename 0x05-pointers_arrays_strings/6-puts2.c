#include "main.h" /*Include the header file with the function prototypes*/

/**
*_putchar-Custom implementation of putchar to satisfy instruction 10.
*@c:The character to be written.
*Return:On success, returns the character written.On error, -1 is returned.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*every_other_char-Prints every other character of a string, followed by a new line.
*@str:pointer to the input string.
*/
void every_other_char(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
    }
	_putchar('\n'); /*Print a new line after printing every other character*/
}
