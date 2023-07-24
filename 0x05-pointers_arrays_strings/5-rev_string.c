#include "main.h" /*Include the header file with the function prototypes*/

/**
*_putchar-Custom implementation of putchar to satisfy instruction 10.
*@c:The character to be written.
*Return:On success, returns the character written. On error, -1 is returned.
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
*reverse_string-Reverses a string.
*@str:Pointer to the input string.
*/
void reverse_string(char *str)
{
	int length = _strlen(str);
	
	for (int i = length - 1; i >= 0; i--)
	{
	_putchar(str[i]);
    }
	_putchar('\n'); /*Print a new line after printing the reversed string*/
}
