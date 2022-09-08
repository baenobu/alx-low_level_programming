#include <stdio.h>
#include <ctype.h>

/**
 * _islower - funtion to check if a param is lower
 * Return: int
 * @c: int
 */

int _islower(int c)
{

    if (islower(c))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}