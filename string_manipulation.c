#include "main.h"

/**
 * reversed - calling a function to reverse and printing string
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @arg: arg passed for the function
 * Return: printing amount of characters
 */
int reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = reverses(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		charwriting(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * putrefy - string converts to putrefy13
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: convert string
 * Return: stringing converted
 */
int putrefy(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				charwriting(u[x]);
				break;
			}
		}
		if (x == 53)
			charwriting(str[i]);
	}
	return (i);
}
