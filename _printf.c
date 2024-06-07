#include "main.h"
#include <stdarg.h>


/**
 *checker - checkes whether next format is identifier
 *@arr:array of aidentifier
 *@format:next format to%
 *Return:int
 */
int checker(char *arr, char format)
{
	int count = 0;
	int k = 0;
	int get = 1;

	while (arr[k] != '\0')
	{
		count++;
		k++;
	}
	for (k = 0; k < count; k++)
	{
		if (arr[k] == format)
		{
			get = 0;
			break;
		}
	}
	return (get);

}
/**
 * _printf - prints to output according to format
 * @format: character string
 *
 * Return:numbers of characters
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;

	int (*f)(va_list);
	va_list list;
	int get;
	char *arr = "cdisbuoxX%";

	va_start(list, format);

	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				get = checker(arr, format[i + 1]);
				if (get == 1)
				{
					j += _putchar(format[i]);
					j += _putchar(format[i + 1]);
					i++;
				}
				else
				{
					f = caller(&format[i + 1]);
					j += f(list);
					i++;
				}
			}
		}
		else
		{
			j += _putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (j);
}
