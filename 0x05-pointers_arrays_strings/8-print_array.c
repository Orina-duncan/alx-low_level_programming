#include "main.h"

/**
*print_array-Prints n elements of an array of integers, followed by a new line.
*@arr:Pointer to the array of integers.
*@n:Number of elements to be printed.
*/
void print_array(int *arr, int n)
{
	if (n <= 0)
	return; /*Nothing to print if n is zero or negative*/

	for (int i = 0; i < n - 1; i++)
	{
	printf("%d, ", arr[i]);
    }
	printf("%d\n", arr[n - 1]);
}
