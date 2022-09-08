#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - function to concatenate 2 strings
 * Return: char ptr
 * @dest: char ptr
 * @src: char ptr
 * @n: int var
 */

char *_strncat(char *dest, char *src, int n)
{
    strncat(dest, src, n);
    return (dest);
}