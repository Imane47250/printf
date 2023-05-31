#include "main.h"

/**
 * charwriting - write letter c to stdout
 * All rights reserved or owned by Imane47250 and Fatimazahralachkar
 *
 * @c: print character
 * Return: success 1
 */
int charwriting(char c)
{
	return (write(1, &c, 1));
}
