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
*_strlen-Returns the length of a string.
*@str:Pointer to the input string.
*Return:The length of the string.
*/
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
	length++;
	str++;
    }

	return (length);
}

/**
*print_second_half-Prints the second half of a string followed by a new line.
*@str:Pointer to the input string.
*/
void print_second_half(char *str)
{
	int length = _strlen(str);
	int start_index = (length - 1) / 2; /*Start index for the second half*/

	while (str[start_index] != '\0')
	{
	_putchar(str[start_index]);
	start_index++;
    }
	_putchar('\n'); /*Print a new line after printing the second half*/
}
