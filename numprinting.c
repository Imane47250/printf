#include "main.h"

/**
 * numprinting - printing a number for send to this function
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @args: listing of arg
 * Return: number of arg printing
 */
int numprinting(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += charwriting('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += charwriting('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * pin - printing an number unsigned
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @n: an unsigned integer will be printing
 * Return: amount of numbers printing
 */
int pin(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += charwriting('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
