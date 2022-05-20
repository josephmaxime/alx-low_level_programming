#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * premain - print before entry code main
 *
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
