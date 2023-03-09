#include <stdio.h>
/**
 * checker - checks the input number from n to the base
 * @num: number is squared and compared against base
 * @psqrt: base number to check
 * Return: natural square root of number base
 */
int helperfunction(int num, int psqrt)
{
	if (num * num == psqrt)
		return (psqrt);
	if (num * num > psqrt)
		return (-1);
	return (helperfunction(num + 1, psqrt));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (helperfunction(1, n));
}

