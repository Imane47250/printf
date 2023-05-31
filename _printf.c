#include "main.h"

/**
 * _printf - prints string special characters
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @format: string consists of 0 or more directives
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", pchar},
		{"s", pstring},
		{"%", percent},
		{"d", integer},
		{"i", integer},
		{"b", binary},
		{"r", reversed},
		{"R", putrefy},
		{"u", _integer},
		{"o", octal},
		{"x", print_hex},
		{"X", heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*analyzer function*/
	printed_chars = analyzer(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
