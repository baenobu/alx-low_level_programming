#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - funtion to check if a param is upper
 * Return: int
 * @c: int
 */

int _isupper(int c)
{

    if (isupper(c))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}