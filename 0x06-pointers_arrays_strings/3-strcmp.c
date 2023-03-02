#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: first string pointer to be compared
 * @s2: second string pointer to be compared
 *
 * Return: if str1 < str2, negative diference of the first unmatched char
 * if str1 == str2, 0
 * if str1 > str2, positive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
