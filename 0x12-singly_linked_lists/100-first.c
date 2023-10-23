#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pre_main - prints a sentence before the main
 *
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void setup()
{
	atexit(pre_main);
}
