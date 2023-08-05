#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Check if a string is a palindrome recursively.
 * @s: The input string.
 * @start: Pointer to the start of the string.
 * @end: Pointer to the end of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len;
	char *end;

	len = _strlen(s);
	end = s + len - 1;
	return (is_palindrome_recursive(s, s, end));
}
