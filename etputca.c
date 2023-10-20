#include "main.h"

/**
 * etputca - to write character
 * @c: The character to be printed
 * Return: if sucessful return 1, -1 otherwise
 */

int etputca(char c)
{
        return (write(1, &c, 1));
}
