#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int z, crr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (crr_i = *i + 1; format[crr_i] != '\0'; crr_i++)
	{
		for (z = 0; FLAGS_CH[j] != '\0'; z++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[z];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = crr_i - 1;

	return (flags);
}

