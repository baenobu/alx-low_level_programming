#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - function
 * Return: char pointer
 * @s: char pointer
 * @b: char
 * @n: unsigned int
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}