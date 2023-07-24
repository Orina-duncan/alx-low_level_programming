#include "main.h" /**Include the header file with the function prototypes*/

/**
*_putchar - Custom implementation of putchar to satisfy instruction 10.
*@c: The character to be written.
*Return: On success, returns the character written. On error, -1 is returned.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*swap_int - Swaps the values of two integers.
*@a:Pointer to the first integer.
*@b:Pointer to the second integer.
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
