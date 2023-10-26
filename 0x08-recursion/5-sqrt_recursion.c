#include "main.h"

/**
 * _sqrt_recursive - calculates the square root using recursion
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Return: natural square root of n, -1 if n doesn't have
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to find the square root of
 * Return: natural square root of n, -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, 0));
	}
}
