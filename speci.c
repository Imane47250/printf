#include "main.h"
/**
 * pchar - prints character
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing of arg
 * Return: return characters printed
 */
int pchar(va_list list)
{
	charwriting(va_arg(list, int));
	return (1);
}

/**
 * pstring - Prints a string
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing of arg
 * Return: return characters printed
 */
int pstring(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		charwriting(str[i]);
	return (i);
}

/**
 * percent - percent symbol
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing of arg
 * Return: return characters printed
 */
int percent(__attribute__((unused))va_list list)
{
	charwriting('%');
	return (1);
}

/**
 * integer - Prints an integer
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: arg listing
 * Return: return characters printed
 */
int integer(va_list list)
{
	int num_length;

	num_length = numprinting(list);
	return (num_length);
}

/**
 * _integer - Prints Unsigned integers
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing of all the arg
 * Return: number of numbers
 */
int _integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (pin(num));

	if (num < 1)
		return (-1);
	return (pin(num));
}
