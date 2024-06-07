#include "main.h"

/**
 *print_char - prints character
 *@list:argument
 *
 *Return: integer
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 *print_str - prints string
 *@list:argument
 *Return:integer
 *
 */
int print_str(va_list list)
{
	int j;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
/**
 *print_pct - prints character "%"
 *@list:arguments
 *Return: character
 */

int print_pct(va_list list)
{
	(void)list;
	return (write(1, "%", 1));
}
/**
 *print_dec - prints decimal
 *@list: the argument decimal
 *Return:broken down number
 *
 */

int print_dec(va_list list)
{
	int value;
	unsigned int abs, a, len;
	unsigned int countn = 1;

	len = 0;

	value = va_arg(list, int);

	if (value < 0)
	{
		len += _putchar('-');
		abs = value * -1;
	}
	else
		abs = value;
	a = abs;
	while (a > 9)
	{
		a = a / 10;
		countn = countn * 10;
	}
	while (countn >= 1)
	{
		len += _putchar(((abs / countn) % 10) + '0');
		countn = countn / 10;
	}
	return (len);
}
