#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * get_endianness - endianess.
 *
 * Return: 0 if big endian 1 if little endian.
 */

int get_endianness(void)
{
	int endian = 1;
	char *adr;

	adr = (char *) &endian;
	return (*adr + '0');
}
