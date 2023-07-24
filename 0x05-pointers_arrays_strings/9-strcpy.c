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
*_strcpy-Copies the string pointed to by src, including the terminating null byte (\0),
*to buffer pointed to by dest.
*@dest:Pointer to the destination buffer.
*@src:Pointer to the source string.
*Return:The pointer to dest.
*/
char *_strcpy(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
    }
	*dest_ptr = '\0'; /*Add the terminating null byte to dest*/

	return (dest);
}
