#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - get ends of input and add together for size
 *@s1: The first string 
 *@s2: The second string
 *Return: The concatanation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *x, *y, *concat;
	concat = x = malloc(strlen(s1) + strlen(s2) + 1);
	for (x = s1; (*x = *y) != '\0'; ++x, ++y) {}
	for (x = s2; (*x = *y) != '\0'; ++x, ++y) {}
	return  (concat)
}
