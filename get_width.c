#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int crr_i;
	int width = 0;

	for (crr_i = *i + 1; format[crr_i] != '\0'; crr_i++)
	{
		if (is_digit(format[crr_i]))
		{
			width *= 10;
			width += format[crr_i] - '0';
		}
		else if (format[crr_i] == '*')
		{
			crr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = crr_i - 1;

	return (width);
}

