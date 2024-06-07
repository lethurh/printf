#include "main.h"
#include <stdarg.h>

/**
 *print_bin - function to change unsigned to binary
 *@list:list argument passed from caller
 *Return:int
 *
 *
 */
int print_bin(va_list list)
{
	unsigned int value = va_arg(list, unsigned int);
	int i, j = 0;
	int k = 0;
	int arr[32];

	if (value == 0)
		j += _putchar(0 + '0');
	for (i = 0; value > 0; i++)
	{
		arr[i] = value % 2;
		value = value / 2;
	}
	for (k = i - 1; k >= 0; k--)
	{
		j += _putchar(arr[k] + '0');
	}
	return (j);
}

/**
 *print_un - prints unsigned integer number
 *@list:lists down argument from unknown variable
 *
 *Return:int
 */

int print_un(va_list list)
{
	unsigned int value  = va_arg(list, unsigned int);
	int j = 0;
	unsigned int rem;
	unsigned int arr[32];
	int k = 0;

	if (value < 1)
	{
		j += _putchar(value + '0');
		return (j);
	}
	while (value > 0)
	{
		rem = value % 10;
		arr[k] = rem;
		value = value / 10;
		k++;
	}
	k = k - 1;
	while (k >= 0)
	{
		j += _putchar(arr[k] + '0');
		k--;
	}
	return (j);
}
/**
 *print_oct - functions to print number in octal
 *@list:variable argument
 *Return:int
 *
 *
 */
int print_oct(va_list list)
{
	unsigned int value = va_arg(list, unsigned int);

	int j = 0;
	int i = 0;
	int arr[32];

	unsigned int rem;

	if (value < 1)
	{
		j += _putchar(value + '0');
		return (j);
	}
	while (value > 0)
	{
		rem = value % 8;
		arr[i] = rem;
		value = value / 8;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		j += _putchar(arr[i] + '0');
		i--;
	}
	return (j);
}
