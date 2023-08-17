#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - To prints anything
 * @format: The list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *Nov = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", Nov, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", Nov, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", Nov, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", Nov, str);
					break;
					default:
					a++;
					continue;
			}
			Nov = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(list);
}
