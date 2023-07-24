#include "main.h" /*Include the header file with the function prototypes*/
/**
*_putchar - Custom implementation of putchar to satisfy instruction 10.
*@c:The character to be written.
*Return:On success, returns the character written. On error, -1 is returned.
*/
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
