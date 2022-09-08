#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate 2 strings
 * Return: char pointer
 * @dest: char pointer
 * @src: char pointer
 */

char *_strcat(char *dest, char *src)
{
    strcat(dest, src);
    return (dest);
}