#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - function
 * Return: unsigned int
 * @s: char pointer
 * @accept: char
 */

unsigned int _strspn(char *s, char *accept)
{
    size_t i, j, ac;

    ac = 0;
    i = 0;

    while (s[i] != ',' && s[i] != ' ')
    {
        for (j = 0; j < strlen(accept); j++)
        {
            if (accept[j] == s[i])
            {
                ac++;
            }
        }
        i++;
    }
    return (ac);
}