#include "main.h"
/**
 *print_hex - prints heaxadecimal number in lowercase
 *@list:variadic argument
 *Return:int
 *
 */
int print_hex(va_list list)
{
	unsigned int value = va_arg(list, unsigned int);
	int j = 0;
	int i = 0;
	int holder[300];
	unsigned int rem;

	if (value < 1)
	{
		j += _putchar(value + '0');
		return (j);
	}
	while (value > 0)
	{
		rem = value % 16;

		if (rem < 10)
			rem = rem + 48;
		else
			rem = rem + 87;
		holder[i] = rem;
		value = value / 16;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		j += _putchar(holder[i]);
		i--;
	}
	return (j);
}
/**
 *print_HEX - prints heaxadecimal number in upper case
 *@list:variable argument
 *Return:int
 *
 *
 */
int print_HEX(va_list list)
{
	unsigned int value = va_arg(list, unsigned int);
	int j = 0;
	int i = 0;
	int holder[300];
	unsigned int rem;

	if (value < 1)
	{
		j += _putchar(value + '0');
		return (j);
	}

	while (value > 0)
	{
		rem = value % 16;

		if (rem < 10)
			rem = rem + 48;
		else
			rem = rem + 55;
		holder[i] = rem;
		value = value / 16;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		j += _putchar(holder[i]);
		i--;
	}
	return (j);
}
