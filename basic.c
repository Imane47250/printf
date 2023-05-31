#include "main.h"
#include <stdio.h>
int hex_check(int, char);

/**
 * binary - Converts a number from base 10 to binary
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing arg passed to this function
 * Return: numbers length printed
 */
int binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (charwriting('0'));
	if (num < 1)
		return (-1);
	len = length(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = reverses(str);
	if (rev_str == NULL)
		return (-1);
	writingrule(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * octal - Prints the numeric representation of a number in octal base
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing all arg passed to program
 * Return: symbols numbers printed to stdout
 */
int octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (charwriting('0'));
	if (num < 1)
		return (-1);
	len = length(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal_rep[len] = '\0';
	rev_str = reverses(octal_rep);
	if (rev_str == NULL)
		return (-1);

	writingrule(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}

/**
 * print_hex - Prints a representation
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing arg passed to function
 * Return: characters numbers printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (charwriting('0'));
	if (num < 1)
		return (-1);
	len = length(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = reverses(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	writingrule(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}


/**
 * heX - Prints a representation of a decimal number on base16 Uppercase
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @list: listing arg passed to function
 * Return: characters print number
 */
int heX(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (charwriting('0'));
	if (num < 1)
		return (-1);
	len = length(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = reverses(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	writingrule(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - hex checks which hex function is calling it
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @x: stated which hex check function to call
 * @num: number to be changed to a letter
 * Return: value ascii for character
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
