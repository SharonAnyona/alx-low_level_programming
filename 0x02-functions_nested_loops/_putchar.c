#include <unistd.h>

/**
 * _putchar - writes  the character c to stdout
 * C: The character :D print
 * Return: On success 1.
 * on error, -1 returned, and errors is set appropriately.
 */
int _putchar(char c) 
		{
		return (write(1, &c, 1)); }
