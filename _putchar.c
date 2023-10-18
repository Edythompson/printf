#include "main.h"

/**
 * _putchar - to write character
 * @c: The character to be printed
 * Return: if sucessful return 1, -1 otherwise
 */

int _putchar(char c)
{
	return(fwrite(1, &c, -1));
}
