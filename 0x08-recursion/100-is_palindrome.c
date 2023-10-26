#include "main.h"
/**
 * str_length - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}

/**
 * is_palindrome_checker - Checks if a substring is a palindrome.
 * @s: The input string.
 * @start: The start index of the substring.
 * @end: The end index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (is_palindrome_checker(s, 0, length - 1));
}
