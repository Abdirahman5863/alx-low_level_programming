#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 *Return:nothing
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar('\n');
	return;
    }
    _putchar(*s);
	    ++s;
	    put_recursion(*s);
   
} 
